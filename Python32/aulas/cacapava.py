import urllib.request
pagina = urllib.request.urlopen('http://www.cacapava.sp.gov.br/')
texto = pagina.read().decode('utf8')
print(texto)
