#include <stdio.h>

int main(){
int i=5, *p;
p = &i;
printf("%x\n %d\n %d\n %d\n %d", p,*p+2,**&p,3**p,**&p+4);



// endere�o de i ou conteudo de p
// conteudo de i + 2
// conteudo do endere�o armazenado
// 3 vezes o conteudo de i
// conteudo do endere�o armazenado + 2

return 0;
}
