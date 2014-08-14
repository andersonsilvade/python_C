'''mensagem .txt'''

texto=open("mensagem.txt",'r')
cripto=open("cripto.txt",'w')

for linha in texto.readlines():
    for letra in linha:
        if letra in 'aeiouãõáê':
            cripto.write('*')
        else:
            cripto.write(letra)

texto.close()
cripto.close()
