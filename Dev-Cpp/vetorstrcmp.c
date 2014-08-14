#include <stdio.h>
#include <string.h>
#include <locale.h>

main ()
{
     setlocale(LC_ALL,"Portuguese");
	char str1[100],str2[100];
	printf ("Entre com uma string: ");
	gets (str1);
	printf ("\n\nEntre com outra string: ");
	gets (str2);
	if ((strcmp(str1,str2)) < 0 )
                printf ("\n\n %s é menor/diferente que %s",str1,str2);
	else if ((strcmp(str1,str2)) > 0)
             printf ("\n\%s é maior/diferente que %s",str1,str2);
            else 
              printf ("\n\n%s é igual a %s ");
              getch();
}
