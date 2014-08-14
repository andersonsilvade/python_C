'''arquivos read'''

arquivo=open("número.txt",'r')
for linha in arquivo.readlines():
    print(linha.rstrip()) #se tirar o .rstrip vai imprimer o num e pular uma linha
arquivo.close()
