def pot(x,n):
    if n == 0:
        return 1
    else:
        return x * pot(x,n-1)
