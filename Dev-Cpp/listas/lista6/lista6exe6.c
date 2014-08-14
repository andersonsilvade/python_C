#include <conio.h>
#include <stdio.h>
void main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
  
  
  int vet1[] = {4,9,13};
  int x;
  for(x=0;x<3;x++){
    printf("%p ",vet1+x);
  
}
  int vet2[] = {4,9,13};
  int z;
  for(z=0;z<3;z++){
    printf("%d ",vet[z]);
}

  getch();
}
