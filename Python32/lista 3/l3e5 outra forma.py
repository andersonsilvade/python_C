''' Algoritimo de Euclides'''


def mdc (n,i):
    while  n % i != 0:
        n,i = i, n % i
    return i
    
