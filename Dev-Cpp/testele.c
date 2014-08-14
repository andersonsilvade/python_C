#include <stdio.h>
int main(){
    FILE *fp;                                /* apontador para o ficheiro */
    char texto[]="que lindo dia\nai ai";    /* texto a enviar para o ficheiro */
    int i=0;                                /* para ler a string caracter a caracter */
 
    /* Abrir o ficheiro */
    fp = fopen("texto.txt", "w");
 
    /* Contar os caracteres do ficheiro */
    while (texto[i]!='\ 0')
        fputc(texto[i++], fp);
 
    /* Fechar o ficheiro */
    fclose(fp);
 
    /* Terminar o programa */
    return 0;
}
