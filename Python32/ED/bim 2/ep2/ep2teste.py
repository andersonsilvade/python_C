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



######################################################################

def txt(txt):
    aux = {}
    abrir = open(txt,"r")
    for l in abrir.readlines():
        l = l.split()
        aux[l[0]] = []
        for x in range(len(l)):
            aux[l[0]].append(l[x])
    abrir.close()
    return aux
    

def mesa(cavaleiro,tavola):
    for p in permutações(cavaleiros):
        lateral = 0

        for x in range(len(p)):
            if p[(x + 1) % len(p)] in tavola[p[x]]:
                 lateral += lateral + 1

        if lateral == len(p):
                 return "É possivel montar a mesa"
        else:
                 return "Não é possivel montar a mesa"



def casamento():
    for p in enumerações(damas):
        parceiros = []

        for x in p:
            parceiros = parceiros + casorio[x]


    possib = []

    for x in damas:
        possib.append(len (casorio[x]))

    for z in combinacoes(possib):
        aux2 = []
        for n in range(len(z)):
            aux2.append(casorio[damas[n]][z[n]])
        if len(set(aux2)) == len (aux2):
            return "É possivel casar as damas"
        return "Não é possivel casar as damas"

       

def combinacoes(combina):
    comb = []
    ctrl = [1]
    p = 1

    for x in combina:
        p = p * x

    for z in combina[::1][:-1]:
        ctrl = [ctrl[0] * z] + ctrl
        
    for y in range(p):
        aux = []
        for h in range(len(combina)):
            aux.append((y//ctrl[h])%combina[h])
        comb.append(aux)
    return comb
                 

casorio = txt("casamento.txt")
tavola = txt("cavaleiros.txt")

damas = list(casorio.keys())
cavaleiros = list(tavola.keys())

print(casamento())
print(mesa(cavaleiros,tavola))

            




              
           


           


