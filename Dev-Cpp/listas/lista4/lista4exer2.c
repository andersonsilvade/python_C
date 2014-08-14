#include <stdio.h>
#include <locale.h>


main() {
  setlocale(LC_ALL,"Portuguese");
  int n=8;
  int v[8];
  int i = 0;
  
while(i<n){
printf("digite um número:");
scanf("%d", &v[i]);
i++;

}

 for (i = 4; i < n; i++)
 printf("%d ", v[i]);

 
 for (i = 0; i < (n/2); i++)
 printf("%d ", v[i]);
 printf("\n");

 getch();
}
