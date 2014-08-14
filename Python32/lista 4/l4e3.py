medias=[]
cont=0
soma=0
for i in range(10):
    notas=[]
    for k in range(3):
        nota=float(input("nota %d do aluno %d ?: " %(k+1,i+1)))
        notas.append(nota)
        media=sum(notas)/3
        if media > 7:
            cont+=1
        medias.append(media)
print("Média maior que 7: ", cont)
            
