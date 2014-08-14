palavra = input("Digite a palavra: ").lower().strip()
for x in range(100):
    print()
digitadas = []
acertos = []
erros = 0
while True:
    senha = ''
    for letra in palavra:
        senha+=letra if letra in acertos else'.'
    print(senha)
    if senha == palavra:
        print('você acertou!!!')
        break
    tentativa = input('\n digite uma letra: ').lower().strip()
    if tentativa in digitadas:
        print('Você já tentou esta letra!!!')
        continue
    else:
        digitadas+=tentativa
        if tentativa in palavra:
            acertos+= tentativa
        else:
            erros+=1

        forca =['''
+-----+
|     |
      |
      |
      |
+-----+''' , '''
+-----+
|     |
O     |
      |
      |
+-----+''','''
+-----+
|     |
O     |
|     |
      |
+-----+''','''
 +-----+
 |     |
 O     |
\|     |
       |
 +-----+''','''
 +-----+
 |     |
 O     |
\|/    |
       |
 +-----+''','''

 +-----+
 |     |
 O     |
\|/    |
 |     |
 +-----+''','''

 +-----+
 |     |
 O     |
\|/    |
 |     |
/      |
 +-----+''','''

+-----+
 |     |
 O     |
\|/    |
 |     |
/ \    |
 +-----+''']
        print (forca[len(erradas)]
               if erros == 7:
               print('Enforcado')
               break
        
