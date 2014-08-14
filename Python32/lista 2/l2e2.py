a=int(input("Lado A do triangulo: "))
b=int(input("lado B do triangulo: "))
c=int(input("lado C do triangulo: "))
tr=a+b+c
if tr != 180:
    print("isso não é um Triângulo!!!!")
elif a==b and a==c and c==b:
    print("Triângulo Equilatero")
elif a!=b and a!=c and b!=c:
        print("Triângulo Escaleno")
else:
    print("Triângulo Isóceles")
