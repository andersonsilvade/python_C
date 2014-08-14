data= input("data dd/mm/aaaa: ")
dia=int(data[0:2])
mês=int(data[3:5])
ano=int(data[6:])
if dia <0:
    print("data inválida")
elif mês in (1,3,5,7,8,10,12):
    if dia >31:
        print ("dia inválido")
elif mês in (4,6,9,11):
    if dia>30:
        print("data inválida")
elif mês == 2:
    if dia>29:
        print("dia inválido")
else:
    print ("mês inválido")
