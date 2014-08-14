CF=float(input("Quantos cigarros fumado por dia?: "))
TF=int(input("Há quantos anos você fuma?: "))
TPD=(CF*10)/60
DTP=TPD/24
DF=(TF*365)
DPM=DF*DTP
print("Tempo de vida perdido: %d Dias" % DPM)

