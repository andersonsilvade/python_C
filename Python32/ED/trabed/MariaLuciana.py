g = {}
g[1] = [6,7]
g[2] = [3,7]
g[3] = [4,7,2,6]
g[4] = [3,7]
g[5] = [7]
g[6] = [1,3]
g[7] = [1,2,3,4,5]


def enumerações(items):
    n = len(items)
    s = [0]*(n+1)
    k = 0
    while True:
        if s[k] < n:
            s[k+1] = s[k] + 1
            k += 1
        else:
            s[k-1] += 1
            k -= 1
        if k == 0:
            break
        else:
            lista = []
            for j in range(1, k+1):
                lista.append(items[s[j]-1])
            yield lista

def combinações(items, n):
    if n==0: yield []
    else:
        for i in range(len(items)):
            for cc in combinações(items[:i]+items[i+1:],n-1):
                yield [items[i]]+cc

def permutações(items):
    return combinações(items, len(items))



def estavel(x):
    for i in x:
       for z in x:
           if i!=z and i in g[z] or z in g[i]:
               return False
    return True
    
    


'''print ('Permutações')
for p in permutações([1,2,3,4,5,6,7]):
    print (p)'''
lista=[]
print ('Enumerações')
for p in enumerações([1,2,3,4,5,6,7]):
    if estavel(p):
        lista.append(p)
lista.sort(key = len,reverse = True)
print(lista[0])
        
                   
            
       
        
        
    
            
        
            


