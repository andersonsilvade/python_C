minutos=int(input("digite os minutos de ligações: "))
if minutos<= 200:
    conta=(minutos*0.20)
    print("conta:R$ %.2f Reais" %conta)
if minutos >200<400:
    conta=(minutos*0.18)
    print("conta:R$ %.2f Reias" %conta)
elif minutos >400<800:
    conta=(minutos*0.15)
    print("conta:R$ %.2f Reais" %conta)
elif minutos >800:
    conta=(minutos*0.08)
    print("conta:R$ %.2f Reais" %conta)
    

    
