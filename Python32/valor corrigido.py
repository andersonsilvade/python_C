valor=eval(input('Valor inicial de investimento: '))
taxa=eval(input('Taxa de juros anual: '))
for i in range(10):
    valor=valor*(1+taxa)
print('valor após 10 anos: %5.2f' %valor)
