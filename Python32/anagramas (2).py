lista=['aline', 'roma', 'igreja', 'mora', 'amor']
anagramas=[]
for palavra in lista:
    for palavra2 in lista:
        if palavra==palavra2:
            break
        if ''.join(sorted(list(palavra)))==''.join(sorted(list(palavra2))):
            anagramas.append(palavra)
            anagramas.append(palavra2)
print (list(set(anagramas)))
            
