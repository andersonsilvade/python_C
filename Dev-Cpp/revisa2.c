#include<stdio.h>
#include<conio.h>
void main() {
  int    valor,*p1,*p4,*p5,idade,vetor[3];
  float  temp, *p2;
  char   aux,*nome = "Algoritmos", *p3;
  /* (a) */
  valor = 12;
  p1 = &valor;
  *p1 = 20;
  printf("(a) %d \n", valor);
     /* (b) */
  temp = 30.9;
  p2 = &temp;
  *p2 = 29.0;
  printf("(b) %.1f \n", temp);
/* (c) */
  p3 = &nome[3];
  aux = *p3;
  printf("(c) %c \n", aux);
 
/* (d) */
  p3 = &nome[1];
aux = *p3;
  printf("(d) %c \n", aux);
/* (e) */
  p3 = nome;
  printf("(e) %c \n", *p3);
/* (f) */
  p3 = p3 + 4;
  printf("(f) %c \n", *p3);
  /* (g) */
  p3--;
  printf("(g) %c \n", *p3);
/* <h> */
  vetor[0] = 11;
  vetor[1] = 15;
  vetor[2] = 37;
   p4 = vetor;
  idade = *p4;
  printf("(h) %d \n", idade);
  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("(i) %d \n", idade); 
  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("(j) %d \n", idade);


  getch();
}
