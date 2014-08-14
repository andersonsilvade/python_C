'''arquivos write'''

arquivo=open("número.txt",'w')
for linha in range(1,101):
    arquivo.write('%d\n' % linha)
arquivo.close()
