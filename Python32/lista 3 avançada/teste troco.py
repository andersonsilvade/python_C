vlc=int(input("digite o valor da conta: "))
pag=int(input("digite o valor  pago: "))
troco = pag–vlc
if troco > 0:
    print("seu troco é de %5.2f R$" % troco)
