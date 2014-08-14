'''jogo'''

from random import randint
print("Bem vindo ao jogo")
sorteado =randint(1,100)
chute=0
while chute != sorteado:
    g = input("digite um numero: ")
    chute=int(g)
    if chute == sorteado:
        print("você venceu!!!!!")
    else:
        if chute >sorteado:
            print("valor alto")
        else:
            print("valor baixo")
print("fim de jogo")
#tbm pode ser usado "print('alto' if chute>sorteado else 'baixo')
