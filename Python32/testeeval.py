print('este programa ilustra um comportamento caótioco')
x= eval(input('entre com um número entre 0 e 1: '))
for i in range (10):
    x = 3.9*x*(1-x)
    print('%2.3f' %x)
