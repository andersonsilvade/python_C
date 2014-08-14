n=input("digite seu nome: ")
s=input("digite sua senha: ")
while n==s:
    print("senha não pode ser igual ao nome")
    n=input("digite seu nome: ")
    s=input("digite sua senha: ")
else:
    print("dados válidos")
