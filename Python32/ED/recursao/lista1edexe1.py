#exercicio 1 entrar nesse site phytontutor.com--->edit--->phyton 3.x
#crie um programa recursivo para calcular o fatorial
def fat(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * fat(n - 1)
#exercicio 5 Qual a saida para x(4)

def x(n):
    if n == 1 or n == 2:
        return n
    else:
        return x(n - 1) + n * x(n - 2)
#exercicio 4 Escreva uma função recursiva que calcule a soma dos dígitos de um inteiro positivo n. A soma dos dígitos de 132, por exemplo, é 6

def sd (n):
    if n < 10:
        return n
    else:
        return n % 10 + sd(n//10) #// divisão inteira
#exercicio 6 Qual é o valor de f (1,10)? Escreva uma função equivalente que seja mais simples.
#double f (double x, double y) {
#if (x >= y) return (x + y)/2;
#else return f (f (x+2, y-1), f (x+1, y-2));
#}
def f(x , y ):
    if(x >= y):
        return (x + y)/2
    else:
        return f(x + 3,y - 3)
#exercicio 7 Qual o resultado da execução do programa abaixo?

def ff(n):
    print(n)
    if(n == 1):
        return 1
    if(n % 2 == 0):
        return ff(n / 2)
    else:
        return ff((n - 1) / 2) + ff((n + 1) / 2)
    
#exercicio 8 Execute fusc (7,0).
def fusc(n,profund):
        i = 0
        while i < profund:
            print("fusc ",n,profund)
            i = i + 1
        if(n == 1):
            return 1
        if(n % 2 == 0):
            return fusc(n/2,profund + 1)
        else:
            return fusc((n - 1)/2 , profund + 1) + fusc((n + 1)/2 , profund + 1)
#exercicio 9 Critique a seguinte função recursiva:
def XX(n):
    print(n)
    if n == 0:
        return 0
    else:
        return XX(((n/3)+1)) + n

#exercicio 11

def exp(k,n):
    if n == 0:
        return 1
    else:
        return  k * exp(k,n-1)
#exercicio 2
v = [2,1,3,4]
def maxmin(v):
    if len (v) == 1:
        return v[0],v[0]
    ma,mi = maxmin(v[1:])
    a = ma if ma > v[0] else v[0]
    b = mi if mi < v[0] else v[0]
    return a,b

#exercicio 4
#v = [2,-1,3,-4]
def somapos(v):
    if len(v) == 0:
        return 0
    soma = somapos(v[1:])
    return soma if v[0] < 0 else v[0] + soma

#print(somapos(v))
    







    
    
