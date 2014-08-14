import urllib.request
import time
def pega_preço():
    pagina = urllib.request.urlopen('http://beans.itcarlow.ie/prices-loyalty.html')
    texto = pagina.read().decode('utf8')
    onde = texto.find('>$')
    inicio= onde + 2
    fim = inicio + 4
    return float(texto[inicio:fim])
opção = input("deseja comprar já? (S/N)")
if opção == 'S' :
    preço = pega_preço()
    print('Você comprou por %5.2f R$' % preço)
else:
    preço = 99.99
    while preço >= 4.74:
        preço = pega_preço()
        if preço >= 4.74:
            time.sleep(5)
    print ('comprar ! Preço: %5.2f' %preço)

