p=50
pp=float(input("Peso do peixe: "))
pm=pp-p
multa=pm*4
if pm>0:
    print("Você execedeu em %4.2f Kg" % pm)
    print("Você esta multado em %4.2f R$" % multa)
else:
    print("Você esta dentro do limite diário")
