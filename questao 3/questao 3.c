#include <stdio.h>

int main(){
	int i=5, j=4;
	int *p, *q;
	
	i = (*p)++ + *q;
	//i recebe conteudo de p incrementado + conteudo de q
	
	printf("%d", i);
	
	
	return 0;
}
