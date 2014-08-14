s_l= float(input("Qual valor do seu salário :"))
p_a = int(input("Quantos porcento de  aumento :"))
p_aa= (p_a/100)
sl= (p_aa*s_l)+s_l
valor_aumento=sl-s_l
print("salário com aumento: %4.2f R$" %sl)
print("valor do aumento: %4.2f R$" % valor_aumento)

      
