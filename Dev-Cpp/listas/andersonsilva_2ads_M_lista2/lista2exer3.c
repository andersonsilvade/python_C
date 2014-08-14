#include <conio.h>
#include <stdio.h>
#include <locale.h>
main(){
        setlocale(LC_ALL, "Portuguese");/*para acentuação*/
       int a;
       int b;
       char ch;
       do{printf("escolha uma operação matematica a ser realizada: \n");
          printf(" (m)utiplicacao\n (a)dicão \n (d)ivisão \n (r)esto da divisão \n (s)ubtração \n");
          scanf("%c",&ch);
          printf(" digite um número: ");
          scanf("%d",&a);
          printf(" digite outro número: ");
          scanf("%d",&b);
          } while((ch!='m')&&(ch!='a')&&(ch!='d')&&(ch!='r')&&(ch!='s'));
            switch(ch){
                       case 'm':printf(" o resultado da mutiplicacao é %d",a*b);
                       break;
                       case 'a':printf(" o resultado da soma é %d",a+b);
                       break;
                       case 'd': printf(" o resuldato da divisão é %5.2f,",(float) a/b);
                       break;
                       case 'r': printf(" o resultado do resto da divisão é %d",a%b);
                       break;
                       case 's': printf(" o resultado da subtração é %d",a-b);
                       break;
                       }
            
                       getch();
            }
