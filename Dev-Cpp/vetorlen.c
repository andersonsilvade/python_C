#include <stdio.h>
#include <string.h>
main ()
{
	int size;
	char str[100];
	printf ("Entre com uma string: ");
	gets (str);
	size=strlen (str);
	printf ("\n\nA string que voce digitou tem tamanho %d",size);
getch();
}