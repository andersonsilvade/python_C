na=int(input("digite um numero: "))
nb=int(input("digite mais um numero: "))
nc=int(input("digite outro numero: "))

maior,menor=na,na
if nb > maior:
    maior=nb
if nc > maior:
    maior=nc
if nb<menor:
    menor=nb
if nc<menor:
    menor=nc
    print("o maior numero é %d e o menor é %d" %(maior,menor))
