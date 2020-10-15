#include <stdio.h>

int main(){
int i=4092;
int *p;

p = 4092;

printf("Para Char: \n");
printf("x+1=%d; x+2=%d; x+3=%d\n", p+1, p+2, p+3);

printf("Para Int: \n");
printf("x+1=%d; x+2=%d; x+3=%d\n", p+2, p+4, p+6);

printf("Para Float: \n");
printf("x+1=%d; x+2=%d; x+3=%d\n", p+4, p+8, p+12);

printf("Para Double: \n");
printf("x+1=%d; x+2=%d; x+3=%d\n", p+8, p+16, p+24);


return 0;
}
