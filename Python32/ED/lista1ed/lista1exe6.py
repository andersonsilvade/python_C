def sd (n):
    if n < 10:
        return n
    else:
        return n % 10 + sd(n//10) #// divisão inteira
