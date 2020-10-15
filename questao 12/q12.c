#include <stdio.h>

void soma(int a, int b){
	printf("Soma = %d\n", a+b);
}
void subtracao(int a, int b){
	printf("Subtração = %d\n", a-b);	
}
void multiplicacao(int a, int b){
	printf("Multiplicação = %d\n", a*b);
}

int main(){
	void (*vetor[])(int, int) = {soma, subtracao, multiplicacao};
	int opcao, a = 3, b = 2;
	printf("Digite sua escolha: ");
	scanf("%d", &opcao);
	(*vetor[opcao])(a, b);
}