#include<stdio.h>
#include<conio.h>
void func(int *px, int *py)
{
  px = py;
 *py = (*py) * (*px);
 *px = *px + 2;
}
void main(void)
{
  int x=2;
  int y=3;
  //scanf("%d",&x); /*2*/
  //scanf("%d",&y); /*3*/
  func(&x,&y);
  printf("x = %d, y = %d\n", x, y);
  getch();
}
