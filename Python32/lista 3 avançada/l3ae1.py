n=int(input("Digite um número inteiro: "))
n1=1
p=0
while p < n:
    p=n1*(n1+1)*(n1+2)
    n1=n1+1
if p != n:
    print("número não é triangular")
else:
    print("número  é triangular")
        
