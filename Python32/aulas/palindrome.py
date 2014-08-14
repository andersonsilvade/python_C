'''troca de string''' 
p=input("digite uma palavra: ")
k=0
while k< len(p):
    if p[k] in 'aeiou':
        print('*')
    else:
        print(p[k])
    k=k+1

