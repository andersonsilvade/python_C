l=[1,7,4,12,-2]
x=l[0]
while True:
    l=l[1:]
    if not  l:
        break
    if l[0]>x:
        x=l[0]
        print (x)
