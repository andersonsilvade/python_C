import urllib.request
import random

        
def anagrama(s1,s2):
    lista = []
    for i in s1:
        if i in s2:
            lista.append(i)
    if len(lista[0]) == len(s2):
        lista.append(s1)
        return True
    return False

def escolhe():
    anagramaList = []
    '''anagrama += random.choice(texto.split())''' 
    anagramaList.append(random.choice(texto.split()))
    anagramas.append(anagramaList)
    for palavra in texto.split():
        if anagrama(anagramaList[0], palavra) == True:
            anagramas.append(palavra)
            
    
    
    
def letra_chutada(letras):
    letras = (certas + erradas)


def denovo():
    while not True or not False:
        X = input('Você quer jogar de novo?(S/N)')
        X = X.upper()
        if X == '':
            print ('Você não digitou nada!')
        if X not in  'S' and  X not in 's' and X not in 'N' and X not in 'n':
            print ('Responda "S" se sim ou "N" se nao!')
        if X == 'S':
            return True
        if X == 'N':
            return False
anagramas = []
pagina = urllib.request.urlopen('http://www.puzzlers.org/pub/wordlists/unixdict.txt')
texto = pagina.read().decode('utf8')
certas = ''
erradas = ''
print(texto)
