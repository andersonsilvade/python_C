''' seja uma string s retorne uma nova string onde as letras sao multiplicadas a medida que vao aumentando seu indice'''
def string_splosion(s):
    k=1
    saida=''
    while k<=len(s):
        saida=saida+s[:k]
        k=k+1
    return saida


print(string_splosion('code'))
