#iunclude <stdlib.h>
#include <stdio.h>

struct cel {
	int cont;
	struct cel *seg;
}; typedef struct cel celula;


void main(){
	celula *lst;
	lst = malloc(sizeof(celula));
	lst->seg = NULL;
	
	
}
