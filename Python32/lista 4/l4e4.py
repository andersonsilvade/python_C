soma=0
mult=1
k=0
numero=[]
for i in range(5):
      n=int(input("digite  número inteiro: "))
      numero.append(n)
      i=i+1
      soma+=n
      mult*=n
print("Números: ", numero)
print("Soma: " ,soma)
print("Multiplicação: " , mult)
