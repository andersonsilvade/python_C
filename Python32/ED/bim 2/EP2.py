# Mago Merlin -----------------------------------------------------------------

def enumerações(items):
    n = len(items)
    s = [0]*(n+1)
    k = 0
    while True:
        if s[k] < n:
            s[k+1] = s[k] + 1
            k += 1
        else:
            s[k-1] += 1
            k -= 1
        if k == 0:
            break
        else:
            lista = []
            for j in range(1, k+1):
                lista.append(items[s[j]-1])
            yield lista

def combinações(items, n):
    if n==0: yield []
    else:
        for i in range(len(items)):
            for cc in combinações(items[:i]+items[i+1:],n-1):
                yield [items[i]]+cc

def permutações(items):
    return combinações(items, len(items))

#------------------------------------------------------------------------------

def importData(endereco):
    a={}
    arquivo = open(endereco, "r")
    for linha in arquivo.readlines():
        linha = linha.split()
        a[linha[0]] = []
        for i in range(1, len(linha)):
            a[linha[0]].append(linha[i])
    arquivo.close()
    return a

def gerarComb(param):  
    combinacoes = []
    controle = [1]
    passos = 1

    for i in param:
        passos *= i

    # Param de tras pra frente sem o ultimo elementos
    for i in param[::-1][:-1]:
        controle = [controle[0] * i] + controle
        
    for i in range(passos):
        a = []
        for x in range(len(param)):
            a.append((i//controle[x])%param[x])
        combinacoes.append(a)
    
    return combinacoes

def casar():
    for p in enumerações(damas):
        pretendentes = [];
        
        for x in p: 
            pretendentes+=casamento[x]
       # pretendentes = set(pretendentes)
        
        if len(pretendentes) < len(p):
            return "Preferencias de "+", ".join(p) +" insuficientes."
        
    numPret = []
            
    for d in damas:
        numPret.append(len(casamento[d]))
            
    for y in gerarComb(numPret):
        z = []
        for num in range(len(y)):
            z.append(casamento[damas[num]][y[num]])
                
        if len(set(z))==len(z):
            return "As damas "+", ".join(damas) + " casam com "+", ".join(z) + " respectivamente."
        
    return "Impossivel casar as damas"

def montarMesa(cavaleiros, tavola):
    for p in permutações(cavaleiros):
        amigos = 0
        
        for i in range(len(p)):
            if p[(i+1)%len(p)] in tavola[p[i]]:
                amigos+=1
                
        if amigos == len(p):               
            return "Mesa possivel : "+", ".join(p)    
        
    return False

casamento = importData("casamento.txt")
tavola = importData("cavaleiros.txt")

damas = list(casamento.keys())
cavaleiros = list(tavola.keys())

print(casar())
print(montarMesa(cavaleiros,tavola))
