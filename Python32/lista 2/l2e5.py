na=int(input("digite um numero: "))
nb=int(input("digite mais um numero: "))
nc=int(input("digite outro numero: "))

maior=na
if nb > maior:
    maior=nb
if nc > maior:
    maior=nc
print("o maior numero é %d" % maior)
