''' separação empares e impares'''

vetor=[]
par=[]
impar=[]
for i in range(1,20):
    n=int(input("digite um número: "))
    vetor.append(n)
    if n%2==0:
        par.append(n)
    else :
        impar.append(n)
print("todos os números :  ",  vetor)
print("Pares: " ,par)
print("Impares: " ,impar)
