def testa_cheques(s, k):
    soma = 0
    i = 1
    while i <= k:
        soma = soma + cheques[s[i]]
        i = i + 1
    if desconto == soma:
        print ("Cheques possíveis: ")
        i = 1
        while i <= k:
            print (cheques[s[i]])
            i = i + 1

def enumera(n):
    s = [0]*(n+1)
    k = 0
    while True:
        if s[k] < n:
            s[k+1] = s[k] + 1
            k += 1
        else:
            s[k-1] += 1
            k -= 1
        if k==0:
            break
        print ()
        i = 1
        while i <= k:
            print (s[i], end=' ')
            i = i + 1
 
     #   testa_cheques(s, k)
        
desconto = 125
cheques = [0, 61, 62, 63, 64]
enumera(4)
