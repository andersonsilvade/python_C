
def contagem():
    import random
    lista=[]
    k=1
    while k <=6:
        x=random.randint(1,60)
        if x not in lista:
            lista.append(x)
            lista.sort()
            k=k+1
    return(lista)



def imprime():
    for i in range(10):
        return contagem()
    


    
