def quicksort(lista):
    lista = list(range(8))
    random.shuffle(lista)
    if len(lista) <= 1: 
        return lista
    
    pivô = lista[0]
    iguais  = [x for x in lista if x == pivô]
    menores = [x for x in lista if x <  pivô]
    maiores = [x for x in lista if x >  pivô]
    return quicksort(menores) + iguais + quicksort(maiores)

print (quicksort(lista))










































