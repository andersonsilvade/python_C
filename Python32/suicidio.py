m = 50
n = 3
cont = 1
k = 0
mesa = list(range(1,m+1))
print(mesa)
while len(mesa) >1:
    cont+=1
    k+=1
    if k == len(mesa):
        k=0
    if cont == 3:
        cont=1
        print(mesa.pop(k))
        if k == len(mesa):
            k=0
print('sobrou: ' ,mesa)
    
