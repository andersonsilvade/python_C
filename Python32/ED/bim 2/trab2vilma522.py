g = {}
g [1] = [6,7]
g [2] = [3,7]
g [3] = [2,4,6,7]
g [4] = [3,7]
g [5] = [7]
g [6] = [1,3]
g [7] = [1,2,3,4,5]


lista = []
removidos = []
def tem_menos(dic):
  
  for d in dic.keys():
    if len( dic[d] ) == 0:
      return 0
    else:
      if len( dic[d] ) == 1:
        return d
      
def remove_chave(dic):
  global lista
  global removidos
    
  lista = dic.pop(tem_menos(dic))
  removidos.append(lista[0])
 

def remove_valores(dic):
  for d in dic.keys():
    if len(dic[d]) == 0:
      removidos.append(dic[d])
      dic.pop(d)
      break
      return

  for d in dic.keys():
    if lista[0] in dic[d]:
      dic[d].remove(lista[0])

def maior_conj_estavel(dic):
  tam = 0
  for d in dic.keys():
    if len(dic[d]) > tam:
      tam = len(dic[d])
  return dic[d]




def loop():
  while True:
    remove_chave(g)  
    remove_valores(g)

    if tem_menos(g) == 0:
        return maior_conj_estavel(g)
    
print( loop() )








