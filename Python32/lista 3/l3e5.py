''' Algoritimo de Euclides'''

n=int(input("digite um numero inteiro: "))
i=int(input("digite um numero inteiro menor que o anterior: "))
soma=1
while  n % i != 0:
    n,i = i, n % i
print(i)
    
