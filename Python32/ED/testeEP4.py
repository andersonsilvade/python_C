grafo = {}
grafo[1] = [7, 6]
grafo[2] = [3, 7]
grafo[3] = [2, 4, 6, 7]
grafo[4] = [3, 7]
grafo[5] = [7]
grafo[6] = [1, 3]
grafo[7] = [1, 2, 3, 4, 5]
c = 0
aux = grafo.copy()
tam = sorted(grafo.values(),key = len)[0]
lista = []
while c < len(grafo):
 
    for i in tam:
        for e in grafo:
            if i in grafo[e]:
       
                aux[e].remove(i)
                lista.append(e)
                del aux[e]
    c+=1

'''for e in grafo:
        if len(grafo[e])<=1:
            lista.append(e)'''
print(lista)
