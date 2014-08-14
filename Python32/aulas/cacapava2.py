import urllib.request
enquete = 200000
while enquete>=200000:
    pagina = urllib.request.urlopen('http://www.cacapava.sp.gov.br/')
    texto = pagina.read().decode('utf8')
    onde = texto.find('vote')
    inicio= onde + 1
    fim = inicio + 4
    enquete = float(texto[inicio:fim])
print ('comprar ! Preço: %5.2f'% enquete)

