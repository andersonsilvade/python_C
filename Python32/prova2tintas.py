mt2=float(input('digite em metros quadrados: '))
mlt=54
ltt=mt2/mlt
if mt2%mlt != 0:
    ltt=ltt+1
    print('você vai precisar de %d latas tintas' %ltt)
