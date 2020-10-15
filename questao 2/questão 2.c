#include <stdio.h>

int main(){
int i=5, *p;
p = &i;
printf("%x\n %d\n %d\n %d\n %d", p,*p+2,**&p,3**p,**&p+4);



// endereço de i ou conteudo de p
// conteudo de i + 2
// conteudo do endereço armazenado
// 3 vezes o conteudo de i
// conteudo do endereço armazenado + 2

return 0;
}
