def anagrama(s1,s2):
    if len(s1)==len(s2):
        a=[]
        b=[]
        x=s1[0]
        i=s2[0]
        while x in len(s1):
            a=s1.append(x)
            x=x+1
        while i in len(s2):
            b=s2.append(i)
            i=i+1
        sorted(a)
        sorted(b)
        if b==a:
                return True
    return False
