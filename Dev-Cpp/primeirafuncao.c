#include <stdio.h>
#include <conio.h>
#include <locale.h>
mensagem()
{
          printf("primeira função!!!");
          }
main()
{
      setlocale(LC_ALL,"Portuguese");
      mensagem();
      getch();
      }
