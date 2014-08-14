def quicksort(lista):
    if len(lista) <=1 :
        return lista
    pivo = lista[0]
    iguais = [x for x in lista if x == pivo]
    menores = [x for x in lista if x < pivo]
    maiores = [x for x in lista if x > pivo]
    return quicksort(menores) + iguais+ quicksort(maiores)
print(quicksort([3,4,8,0,6,7,4,2,1,9,4,5]))
