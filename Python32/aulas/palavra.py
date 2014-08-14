p=input("digite uma palavra: ")
k=0
troca='*'
while k< len(p):
    if p[k] in 'aeiou':
        troca=troca + '*'
    else:
        troca= troca + p[k]
    k+=1
print("palavra trocada %s " % troca)

