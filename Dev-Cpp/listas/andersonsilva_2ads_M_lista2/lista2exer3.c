#include <conio.h>
#include <stdio.h>
#include <locale.h>
main(){
        setlocale(LC_ALL, "Portuguese");/*para acentua��o*/
       int a;
       int b;
       char ch;
       do{printf("escolha uma opera��o matematica a ser realizada: \n");
          printf(" (m)utiplicacao\n (a)dic�o \n (d)ivis�o \n (r)esto da divis�o \n (s)ubtra��o \n");
          scanf("%c",&ch);
          printf(" digite um n�mero: ");
          scanf("%d",&a);
          printf(" digite outro n�mero: ");
          scanf("%d",&b);
          } while((ch!='m')&&(ch!='a')&&(ch!='d')&&(ch!='r')&&(ch!='s'));
            switch(ch){
                       case 'm':printf(" o resultado da mutiplicacao � %d",a*b);
                       break;
                       case 'a':printf(" o resultado da soma � %d",a+b);
                       break;
                       case 'd': printf(" o resuldato da divis�o � %5.2f,",(float) a/b);
                       break;
                       case 'r': printf(" o resultado do resto da divis�o � %d",a%b);
                       break;
                       case 's': printf(" o resultado da subtra��o � %d",a-b);
                       break;
                       }
            
                       getch();
            }
