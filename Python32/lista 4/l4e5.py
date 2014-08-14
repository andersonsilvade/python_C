idade=[]
altura=[]
for i in range(5):
    idd=int(input("Digite a idade: "))
    idade.append(idd)

    alt=float(input("Digite a altura: "))
    altura.append(alt)

altura.reverse()
idade.reverse()
print("Altura: ", altura)
print("Idade: ",idade)
