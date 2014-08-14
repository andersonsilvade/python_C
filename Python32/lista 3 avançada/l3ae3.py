'''numeros primos'''

numero = int(input('digite um número inteiro : '))
x = int(numero)
count = 0

while 1 <= x:
      if ( numero % x == 0 ):
            count += 1
      x -=1

if count > 2 :
      print('não é  primo')
else:
      print('Primo')
