PA=80000
PB=200000
tca=0.03
tcb=0.015
a=0
while PA<PB:
    PA+=PA*tca
    PB+=PB*tcb
    a+=1
print("o tempo necessario para que a população se iguale é %d anos" % a)
    
