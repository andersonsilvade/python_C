import urllib.request
import random
pagina = urllib.request.urlopen('http://www.puzzlers.org/pub/wordlists/unixdict.txt')
texto = pagina.read().decode('utf8')
def ana(texto):
    anas=[]
    ana1=[]
    ana2=[]
    for i in texto:
        if len(texto[i])==len(texto[i]):
            for x in texto[i].lower():
                ana1.append(x)
                ana1.sort()
            for j in texto[i].lower():
                ana2.append(j)
                ana2.sort()
                if ana1==ana2:
                    anas.append(ana1,ana2)
                
                    return True
                else:
                    return False
        return False
        
    print(anas)
