a={}
def anagrama(t1,t2):
    if ''.join(sorted(list(t1)))== ''.join(sorted(list(t2))):
        a=t1+','+t2
        return a
    return 'nao é anagrama'
