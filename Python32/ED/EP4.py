g = {}
g [1] = [6,7]
g [2] = [3,7]
g [3] = [2,4,6,7]
g [4] = [3,7]
g [5] = [7]
g [6] = [1,3]
g [7] = [1,2,3,4,5] 


lista = []
aux= g.copy()

while(len(aux)>0):
    aux2= sorted(aux.values(), key = len)[0]
    
    for i in g:
        
        if aux2 == g[i]:
            lista.append(i)
            del aux[i]
            if aux2 != []:
                del aux[aux2[0]]  
            for k in aux2:
                for j in aux:
                    if k in aux[j]:
                        aux[j].remove(k)
                     
                

        

print("lista de elementos estáveis :",lista)

        
        
    
        
