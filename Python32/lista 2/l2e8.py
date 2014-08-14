m2=int(input("Quantos metros quadrados serão pintados: "))
lt=18*3
ltg=m2/lt
if ltg %2> 0:
    ltg=int(ltg+1)
vllt=80
print("Você vai gastar: %d latas de tintas" % ltg)
print("O valor a ser pago será de : %5.2f" % (ltg*vllt))
