vetor=[]
c=1
while c<=4:
    n=float(input("digite as notas: "))
    vetor.append(n)
    c+=1
soma = 0
c = 0
while c<=3:
    soma+=vetor[c]
    c+=1
print("notas: ",vetor)
print("média: %4.2f" % (soma/4))
