def ana(t1,t2):
    anas=[]
    anas1={}
    ana1=[]
    ana2=[]
    if len(t1)==len(t2):
        for x in t1.lower():
            ana1.append(x)
            ana1.sort()
            print(ana1)
        for i in t2.lower():
            ana2.append(i)
            ana2.sort()
            print(ana2)
        if ana1==ana2:
            anas.append(t1)
            anas.append(t2)
            anas1=anas
            return anas,anas1
            return True
        else:
            return False
    return False
def novamente():
    while not True or not False:
           x=input('jogar novamente? (S/N): ')
           x=x.upper()
           if x==''or x not in 'S' or x not in 'N':
               ('digite S para Sim ou N para Não')
           if x == 'S':
               return True
           if x == 'N':
               return False


for c in ana():
           if c in certas:
               print (c,end=' ')
           else:
               print('_',end= ' ')
               
print (forca[len(erradas)])
                
