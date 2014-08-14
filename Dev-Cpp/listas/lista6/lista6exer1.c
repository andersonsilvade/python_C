#include <stdio.h>
#include <conio.h>
 void func(int *px,int *py)
 {
      px=py;
      *py =(*px)*(*py);
      *px = (*px)+2;
      }
      void main(void){
           int x = 2;
           int y = 4;
           //scanf("%d",&x);
           //scanf("%d",&y);
           func(&x,&y);
           
           printf("x = %d  ,  y = %d",x,y);
           
           getch();
           }
           
