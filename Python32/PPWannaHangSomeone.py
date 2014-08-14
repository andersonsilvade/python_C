import urllib.request
import random

forca=['''
    +------------¬
    |            §§
    |             |
    |
    |
    |
    |
    |
    |
    |
    | 
    |
    |
    |
    |
    |
    |
    |
==============================''', '''
    +------------¬
    |            §§
    |            _|_
    |           ( --)
    |           (   >
    |           (_-_)
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    | 
==============================''', '''
    +------------¬
    |            §§
    |            _|_
    |           ( ||)
    |           (   >
    |           (_o_)
    |             |
    |      _|_____|
    |       |
    |
    |
    |
    |
    |
    |
    |
    |
    |
==============================''', '''
    +------------¬
    |            §§
    |            _|_
    |           ( oo)
    |           (   >
    |           (_0_)
    |             |
    |      _|_____|_____|_
    |       |           |
    |
    |
    |
    |
    |
    |
    |
    |
    |
==============================''', '''
    +------------¬
    |            §§
    |            _|_
    |           ( 00)
    |           (   >
    |           (_O_)
    |             |
    |      _|_____|_____|_
    |       |     |     |
    |             |
    |             |
    |
    |
    |
    |
    |
    |
    |
==============================''', '''
    +------------¬
    |            §§
    |            _|_
    |           ( OO)
    |           (   >
    |           (_O_)
    |             |
    |      _|_____|_____|_
    |       |     |     |
    |             |
    |             |
    |            |
    |           |
    |           |
    |         __|
    |
    |
    |
==============================''', '''
    +------------¬
    |            §§
    |            _|_
    |           ( XX)
    |           (   >
    |           (_-_)
    |             |
    |      _|_____|_____|_
    |       |     |     |
    |             |
    |             |
    |            | |
    |           |   |
    |           |   |
    |         __|   |__
    |
    |
    |
==============================''']    

def escolhe_palavra():
    pagina=urllib.request.urlopen('http://www.ime.usp.br/~pf/algoritmos/dicios/br')
    palavras=pagina.read().decode('iso8859').split()
    palavraescolhida = random.choice(palavras)
    return palavraescolhida

def de_novo():
    respostaerrada=True
    while respostaerrada:
        resposta=input('\nVocê deseja jogar novamente(S ou N)? ')
        resposta.upper()
        if resposta=='S':
            print('-'*100)
            return True
            break
        elif resposta=='N':
            return False
            break
        else:
            respostaerrada=True
            print('Você digitou alguma coisa errada.')

def venceu(certas, palavraescolhida):
    for i in range(len(palavraescolhida)):
        if palavraescolhida[i] not in certas:
            return False
            break
    return True

def chutar(letras):
    tentouerrado=True
    
    while tentouerrado:
        chute=input('\n\nChuta uma letra aí: ')
        if len(chute) != 1:
            tentouerrado=True
            print('\nVocê não sabe que é uma letra só?')            
        elif chute in letras:
            tentouerrado=True
            print('\nVocê não viu que essa letra já foi?')
        elif chute not in 'qwertyuiopasdfghjklçzxcvbnmáâãóôõéêüúíQWERTYUIOPASDFGHJKLÇZXCVBNMÁÉÍÓÚÂÔ':
            tentouerrado=True
            print('\nVocê não percebe que isso não é uma letra?')
        else:
            return chute
            break

def desenha_situação(forca, erradas, certas, palavraescolhida):
    print(forca[len(erradas)],'\n')
    print('Você já tentou e errou: ', erradas, '\n')
    espaços='_'*len(palavraescolhida)
    for i in range(len(palavraescolhida)):
         if palavraescolhida[i] in certas:
             espaços = espaços[:i] + palavraescolhida[i] + espaços[i+1:]
    for letra in espaços:
        print(letra, end=' ')

def perdeu(erradas, forca):
    if len(erradas)==len(forca)-1:
        desenha_situação(forca, erradas, certas, palavraescolhida)
        print('\n\nVocê morreu enforcado. A palavra era ', palavraescolhida)
        return True
    else:
        return False
        

jogoterminado=False
while jogoterminado==False:
    print('\nBem vindo a Forca.')
    palavraescolhida=escolhe_palavra()
    certas=''
    erradas=''

    while perdeu(erradas, forca)==False:
        desenha_situação(forca, erradas, certas, palavraescolhida)
        letras=certas+erradas
        chute=chutar(letras)
        if chute not in palavraescolhida:
            erradas=erradas+chute     
        else:
            certas=certas+chute
            if venceu(certas, palavraescolhida):
                 print('\nVocê se salvou seu sortudo. A palavra era "', palavraescolhida, '".')
                 break

    jogoterminado=de_novo()
    if jogoterminado:
        jogoterminado=False
    else:
        break
        

    
    
            
            
    







    
