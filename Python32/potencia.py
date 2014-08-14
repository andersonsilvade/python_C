'''reursao potencia'''
def pot (x,n):
    if n==0:
        return 1
    else:
        return x*pot(x,n-1)

'''recursão inverter string'''
def inv(s):
    if len(s)<=1:
        return (s)
    else:
        return inv(s[1:])+ s[0]

'''teste de mesa
return inv('oma')+'r'
return inv('ma')+ 'o'
return inv('a')+  'm'
reurn              'a'
return amor'''
