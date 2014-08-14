#include <stdio.h>
#include <locale.h>


main() {
  setlocale(LC_ALL,"Portuguese");
  char string[50];
  char string2[50];
  
  printf("Digite duas palavras: ");
  gets(string);
  int i;
  int esp = 0;
  int x = 0;
  
  for(i = 0;i < strlen(string);i++){
        if (string[i]!=' '){
                         string2[x]=string[i];
                         x++;
                         }else{
                               esp++;
                               }
                         }
  printf("essa palavra tem :%d espaço\n",esp);
  printf("%s",string2);
  
  getch();
}
