vlc=int(input("digite o valor da conta: "))
pag=int(input("digite o valor  pago: "))
troco=pag-vlc
troco2=troco*(-1)
n2=50
n3=20
n4=10
n5=5
n6=2
n7=1
if troco > 0:
    nb=troco/n2
    nc=(troco/n3)-(nb*2.5)
    nd=(troco/n4)-(nb*5)
    ne=(troco/n5)-(nb*10)
    nf=(troco/n6)-(nb*25)
    ng=(troco/n7)-(nb*50)
    print("Seu troco é de %d R$" % troco)
if nb>=1:
    print("você vai receber %d nota de 50 R$" %nb)
if nc>=1:
    print("você receberá %d nota(s) de 20 R$" %nc)
if nd>=1:
    print("você receberá %d nota(s) de 10 R$" %nd)
if ne>=1:
    print("você receberá %d nota(s)de 5 R$" %ne)
if nf>=1:
    print("você receberá %d nota(s) de 2 R$" %nf)
if ng>=1:
    print("você receberá %d nota(s) de 1 R$" %ng)  
if troco<0:
    print("Está faltando %d R$" %troco2)
if troco==0:
    print("seu dinheiro está certo") 
    
