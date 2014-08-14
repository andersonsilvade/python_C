#recursao fib ruim
def fib(n):
    print('fib(%d)'%n)
    if n <= 2:
        return 1
    else:
      return fib(n-1)+fib(n-2)


#fib bom
fib_cache = {}
def fibbom(n):
    print('fibbom(%d)'%n)
    if n <= 2:
        return 1
    else:
      if n not in fib_cache:
        fib_cache[n] = fibbom(n-1) + fibbom(n-2)
      return fib_cache[n]

#fib2 transformando o fib em um fib rapido
from functools import lru_cache
@lru_cache(maxsize=None)
def fib2(n):
    print('fib2(%d)'%n)
    if n <= 2:
        return 1
    else:
      return fib2(n-1)+fib2(n-2)
