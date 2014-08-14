vetorA=[]
vetorB=[]
vetorC=[]
for i in range(10):
    n=int(input("VetorA: "))
    vetorA.append(n)
    n2=int(input("vetorB: "))
    vetorB.append(n2)
for k in range (10):
    vetorC.append(vetorA[k])
    vetorC.append(vetorB[k])
print("Vetor C: " ,vetorC)
