print("Bem vindo ao jogo ")
chute=0
while chute != 42:
    g = input("digite um numero: ")
    chute=int(g)
    if chute == 42:
        print("você venceu!!!!!")
    else:
        if chute >42:
            print("valor alto")
        else:
            print("valor baixo")
print("fim de jogo")
