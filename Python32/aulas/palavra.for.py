'''tirando while usando for'''

p=input("digite uma palavra: ")
troca='*'
for letra in  p:
    if letra in 'aeiou':
        troca=troca + '*'
    else:
        troca= troca+letra
print("palavra trocada %s" % troca)

