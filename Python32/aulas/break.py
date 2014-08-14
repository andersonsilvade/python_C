soma=0
n=0
while True:
    x=int(input("Digite o numero(0 sai) :"))
    if x==0:
        break
    else:
        n=n+1
    soma=soma+x
    print("média: %5.2f" %(soma/n))
