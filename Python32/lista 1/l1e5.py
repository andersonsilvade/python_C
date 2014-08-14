v_m= float(input("Qual valor da mercadoria :"))
p_a = int(input("Quantos porcento dedesconto :"))
p_aa= (p_a/100)
v_md= v_m-(p_aa*v_m)
valor_desconto=v_m-v_md
print("mercadoria com desconto: %d R$" %v_md)
print("valor do desconto: %d R$" % valor_desconto)

      
