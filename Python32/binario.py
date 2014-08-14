a=input("digite para qual unidade vc quer converter H(hexadecimal)B(binario)O(octal): ")

if a =='B':
    x=int(input("digite um numero : "))
    c="{:b}".format(x)
    print (c)
if a =='H':
    x=int(input("digite um numero : "))
    c='{:x}'.format(x)
    print(c)
if a =='O':
    x=int(input("digite um numero : "))
    c='{:o}'.format (x)
    print (c)
