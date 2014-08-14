 #include<stdio.h>
#include<conio2.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void azul();           
void amarelo();        
void verde();          
void vermelho();
void piscaAzul(); 
void piscaAmarelo(); 
void piscaVerde(); 
void piscaVermelho();
void setas(); 

int main(){
int retorno = 1, pontuacao = 0;    //DECLARE 'pontuacao'
while(retorno==1){      
azul();
amarelo();
verde();
vermelho();
setas();
int nivel=1, aleatorio, cor;
int vetor[nivel], i, j, sair=0;

do{
  srand(time(NULL));
  aleatorio = rand() % 4;

vetor[nivel-1] = aleatorio;

for(i=0; i<nivel; i++){
wait(0.5);
if(vetor[i]==0){
piscaAzul();
  }
if(vetor[i]==1){
piscaAmarelo();
  }
if(vetor[i]==2){
piscaVerde();
  }
if(vetor[i]==3){
piscaVermelho();
  }      
}
for(j=0; j<nivel; j++){
textbackground(BLACK);
printxy(60, 20, "COR : ");
scanf("%i", &cor);
printxy(66, 20, "   ");
if(vetor[j]==cor){                      //SE ACERTAR A COR
pontuacao = pontuacao + 10;            //10 PONTOS POR ACERTO
gotoxy(4, 4);                          //POSICIONA CURSOR
printf("PONTUACAO : %i", pontuacao);   //IMPRIME A PONTUAÇÃO
gotoxy(4, 5);                          //POSICIONA O CURSOR
printf("NIVEL     : %i", nivel);       //IMPRIME O NIVEL
 }
if(vetor[j]!= cor){
j = nivel;
sair = 1;
 }
}
nivel++;
}while(sair != 1);
system("cls");
printxy(33, 9, "VOCE PERDEU!!!");
gotoxy(33, 11);                       //POSICIONA CURSOR
printf("PONTUACAO : %i", pontuacao);  //IMPRIME PONTUAÇÃO
gotoxy(33, 12);                       //POSICIONA CURSOR
printf("NIVEL     : %i", nivel);      //IMPRIME O NIVEL
getch();
system("cls");
printxy(32, 8,  "JOGAR NOVAMENTE?");
printxy(32, 9,  "    1 - SIM");
printxy(32, 10, "    2 - NAO");
printxy(32, 12, "    OPCAO : ");
scanf("%i", &retorno);
system("cls");
nivel = 1;
pontuacao = 0;
}
}
void azul(){
textbackground(BLUE);
printxy(32, 2, "                ");
printxy(32, 3, "                ");
printxy(32, 4, "                ");
printxy(32, 5, "                ");
printxy(32, 6, "                ");
printxy(32, 7, "                ");
}
void amarelo(){
textbackground(YELLOW);
printxy(16, 8,  "                ");
printxy(16, 9,  "                ");
printxy(16, 10, "                ");
printxy(16, 11, "                ");
printxy(16, 12, "                ");
printxy(16, 13, "                ");
}
void verde(){
textbackground(GREEN);
printxy(48, 8,  "                ");
printxy(48, 9,  "                ");
printxy(48, 10, "                ");
printxy(48, 11, "                ");
printxy(48, 12, "                ");
printxy(48, 13, "                ");
}
void vermelho(){
textbackground(RED);
printxy(32, 14, "                ");
printxy(32, 15, "                ");
printxy(32, 16, "                ");
printxy(32, 17, "                ");
printxy(32, 18, "                ");
printxy(32, 19, "                ");
}

void piscaAzul(){
textbackground(BLACK);
printxy(32, 2, "                ");
printxy(32, 3, "                ");
printxy(32, 4, "                ");
printxy(32, 5, "                ");
printxy(32, 6, "                ");
printxy(32, 7, "                ");
wait(0.5);
azul();
}
void piscaAmarelo(){
textbackground(BLACK);
printxy(16, 8,  "                ");
printxy(16, 9,  "                ");
printxy(16, 10, "                ");
printxy(16, 11, "                ");
printxy(16, 12, "                ");
printxy(16, 13, "                ");
wait(0.5);
amarelo();
}
void piscaVerde(){
textbackground(BLACK);
printxy(48, 8,  "                ");
printxy(48, 9,  "                ");
printxy(48, 10, "                ");
printxy(48, 11, "                ");
printxy(48, 12, "                ");
printxy(48, 13, "                ");
wait(0.5);
verde();
}
void piscaVermelho(){
textbackground(BLACK);
printxy(32, 14, "                ");
printxy(32, 15, "                ");
printxy(32, 16, "                ");
printxy(32, 17, "                ");
printxy(32, 18, "                ");
printxy(32, 19, "                ");
wait(0.5);
vermelho();
}
void setas(){
textbackground(BLACK);

gotoxy(40, 8);
printf("%c", 30);
gotoxy(40, 9);
printf("0");

gotoxy(40, 13);
printf("%c", 31);
gotoxy(40, 12);
printf("3");

gotoxy(32, 10);
printf("%c 1", 17);

gotoxy(45, 10);
printf("2 %c", 16);
}

