'''serie fibonacci'''
def fib (n):
    a,b=1,1
    soma=1
    while soma<=n-2:
        a,b = b,a+b
        soma=soma+1
    return b    
