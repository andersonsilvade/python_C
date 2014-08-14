import urllib.request
import random
pagina = urllib.request.urlopen('http://www.puzzlers.org/pub/wordlists/unixdict.txt')
texto = pagina.read().decode('utf8')
def inicial():
    print("#################################################")
    print("#                                               #")
    print("#           BEM VINDOS AO JOGO DA FORCA         #")
    print("#                                               #")
    print("#################################################")






inicial()


listapalavras=[]

for plv in texto.split():
    if len(plv)>=4:
        listapalavras.append(plv)


forca =['''
+-----+
|     |
      |
      |
      |
+-----+''' , '''
+-----+
|     |
O     |
      |
      |
+-----+''','''
+-----+
|     |
O     |
|     |
      |
+-----+''','''
 +-----+
 |     |
 O     |
\|     |
       |
 +-----+''','''
 +-----+
 |     |
 O     |
\|/    |
       |
 +-----+''','''

 +-----+
 |     |
 O     |
\|/    |
 |     |
 +-----+''','''

 +-----+
 |     |
 O     |
\|/    |
 |     |
/      |
 +-----+''','''

+-----+
 |     |
 O     |
\|/    |
 |     |
/ \    |
 +-----+''']

print(list(set(forca[0])))
chute=input('digite uma letra: ')
certas=''
erradas=0
def anagrama():
    anas=[]
    for palavra in listapalavras:
        for palavra2 in listapalavras:
            if palavra==palavra2:
                break
        if ''.join(sorted(list(palavra)))== ''.join(sorted(list(palavra2))):
            anas.append(palavra)
            anas.append(palavra2)
            return anas
anagrama()

anagramas=[]

def escolhe():
    escolhida = []
    escolhida.append(random.choice(anas.split()))
    for palavra in anas.split():
        if anagrama(escolhida[0], palavra) == True:
            anagramas.append(palavra)           

    
def vitoria(certas, anagramas):
    for i in range(len(anagramas)):
        if escolhida[i] not in certas:
            return False
            break
    return True


def chutar(chutes):
    tentouerrado=True
    
    while tentouerrado:
        chute=input('\n\n Digite uma letra: ')
        return chute
        break
     

def perdeu(erradas, forca):
    if erradas==len(forca)-1:
        desenha(forca, erradas, certas, escolhida)
        print('\n\nVocê morreu enforcado. A palavra era ', escolhida)
        return True
    else:
        return False       
    
def desenha(forca,erradas):
    if erradas==0:
        return forca[0]
    if erradas == 1:
        return forca[1]
    if erradas == 2:
        return forca[2]
    if erradas == 3:
        return forca[3]
    if erradas == 4:
        return forca[4]
    if erradas == 5:
        return forca[5]
    if erradas == 6:
        return forca[6]
    if erradas == 7:
        return forca[7]
    if erradas == 8:
        return forca[8]

for  palavra in anagramas:
    if chute in palavra:
        certas+=chute
        print (chute,end=' ')
    else:
        print('_',end= ' ')
        erradas+=1
    desenha()

anagramas=[]

chute=input('digite uma letra: ')

chutar(chute)


listapalavras=[]



while not True or not False:
           x=input('jogar novamente? (S/N): ')
           x=x.upper()
           if x==''or x not in 'S' or x not in 'N':
               print('digite S para Sim ou N para Não')
               if x == 'S':
                   inicial()
               if x == 'N':
                   break







