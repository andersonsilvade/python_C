'''faça um programa que troque as vogais de uma string por '*' não use replace'''
texto = input('digite um texto: ')
saida= ''
for c in texto:
    if c in 'aeiou':
        saida=saida+'*'
    else:
        saida =saida+c
print (saida)
