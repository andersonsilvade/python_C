altura = [1.65,1.66,1.67,1.66,1.70,1.69,1.70,1.68,1.69,1.65,1.69,1.70,1.65,1.64,1.66,1.67,1.65,1.66,1.69,1.67,1.70,1.77,1.65,1.66,1.67,1.68,1.69,1.70,1.72,1.73]
idade = [14,14,13,12,13,14,15,12,13,14,15,16,12,12,13,13,13,14,14,14,13,13,12,12,12,13,13,13,15,15]
m=0
x=0
while x<30:
    m+=altura[x]
    media=m/30
    x+=1
cont=0
for x in range(30):
    if idade[x]>13 and altura[x]< media:
        cont+=1
print("Com idade maior que 13 e maior que a média temos: ",cont)
