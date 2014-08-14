mês=['Janeiro','Fevereiro','Março','Abril','Maio','Junho','Julho','Agosto','Setembro','Outubro','Novembro','Dezembro']
temperatura=[]
soma=0
m=[]
for i in range(12):
    temp=float(input("Temperatura média mensal: "))
    temperatura.append(temp)
    i+=1
    soma+=temp
    media=soma/12
for i in range(12):
    if temperatura[i] > media:
        m.append(mês[i])
print(" temperatura média anual é %5.2f °C os mêses que ficaram acima da média foram %s"% (media, m))
