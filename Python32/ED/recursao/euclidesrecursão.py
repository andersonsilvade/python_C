'''recursão'''
def euclides(a,b):
    if a%b==0:
        return b
    else:
        return euclides(b,a%b)

'''soma digitos '''
def sd(n):
    
    if n <= 9:
        return n
    else:       
        return n % 10 + sd (n // 10)
