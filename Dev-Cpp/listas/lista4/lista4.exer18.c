#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main() {
  setlocale(LC_ALL,"Portuguese");
  int linha = 2;
  int coluna = 3;
  int colunaa = 2;
  int matriz[linha][coluna][colunaa];
  int x , y , z;
  for(x=0;x<linha;x++){
                      
      
       for(y = 0;y < coluna;y++){
          
        for(z = 0; z<colunaa;z++){
        
        scanf(" [%d][%d][%d] ",x,y,z, &matriz[x][y][z]);
        
       
                                     }
                                 }
                      }
   for(x=0;x<linha;x++){
      for(y = 0;y < coluna;y++){
        for(z = 0; z<colunaa;z++)
        printf("%d",matriz[x][y][z]);
                                }            
                                }
getch();
}
      
                             
