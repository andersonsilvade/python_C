#include <stdio.h>
#include <stdlib.h>
main()
{
      
int a;
int b;
int c;
printf("digite um numero: ");
scanf("%d",&a);
printf("digite outro numero: ");
scanf("%d",&b);
printf("digite mais um numero: ");
scanf("%d",&c);

if(a>=b  && b>=c){
           int maior=a;
           int medio=b;
           int menor=c;
                  
       printf("%d %d %d ",menor,medio,maior);
       
                   }
                 
          
        
else if(b>=a && a>=c){
       int maior=b;
       int medio=a;
       int menor=c;
              
       printf("%d %d %d ",menor,medio,maior);
      
               }
               
      
       
else if(c>=a && a>=b){
       int maior=c;
       int medio=a;
       int menor=b;
             
       printf("%d %d %d ",menor,medio,maior);
                 }
                
       
else if(a>=c && c>=b){
          int maior=a;
          int medio=c;
          int menor=b;
                 
       printf("%d %d %d ",menor,medio,maior);
                   }
                  
         
        
else if(b>=c && c>=a){
       int maior=b;
       int medio=c;
       int menor=a;
              
       printf("%d %d %d ",menor,medio,maior);
       
               }
              
       
else if(c>=b && b>=a){
       int maior=c;
       int medio=b;
       int menor=a;
       
           
              
       printf("%d %d %d ",menor,medio,maior);
       }
       
getch();
}
