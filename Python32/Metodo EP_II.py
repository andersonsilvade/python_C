def anagrama(s1,s2):
    lista = []
    for i in s1:
        if i in s2:
            lista.append(i)
    if len(lista) == len(s2):
        return True
    return False
    
