nota1=float(input("digite a primeira nota: "))
nota2=float(input("digite a segunda nota: "))
nota3=float(input("digite a segunda nota: "))
me=float(input("digite a média do exercício: "))
n2=nota2*2
n3=nota3*3
met=(nota1+n2+n3+me)/7
if met >= 9.0:
    x = "A"
elif met >=7.5 < 9.0:
    x="B"
elif met >= 6.0 < 7.5:
    x="C"
elif met > 4.0 < 6.0:
    x="D"
elif met < 4.0:
    x="E"
if x=="A" or x=="B" or x=="C":
        print("Você foi  Aprovado sua media foi %4.1f" % met)
else:
    print("Reprovado")
