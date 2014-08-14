numeros=[]
pares =[]
impares =[]
k=0

for i in range(1,21):
    numero=int(input("Numero %d?: "%i))
    numeros.append(numero)
while k < numero:
    v=numeros%2
    k=k+1
    if v==0:
        pares.append(numeros)
        
    
else:
    impares.append(numeros)
print("Numeros: " ,numeros)
print("Pares: " , pares)
print("Impares: " ,impares)
