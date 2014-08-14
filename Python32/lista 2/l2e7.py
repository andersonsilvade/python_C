slhr=float(input("Quando vc ganha por hora: "))
hrs=float(input("Quantas horas você trabalha por mês: "))
slb=slhr*hrs
ir=slb*0.11
inss=slb*0.08
sin=slb*0.05
descontos=ir+inss+sin
sll=slb-descontos
print("Salario bruto %6.2f R$" %slb)
print("desconto inss %5.2f R$" %inss)
print("desconto Imposto de renda %5.2f R$" %ir)
print("desconto Sidicato %5.2f R$" %sin)
print("Você receberá %6.2f R$" %sll)
