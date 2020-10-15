#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void * a, const void * b){ //função que compara os valores
  return ( *(int*)a - *(int*)b );
}

int main(){

    int i, n, j, k;
    srand(time(NULL));
    float temp = 0.0f;
    printf("Informe quantidade de elementos: ");
    scanf("%d", &n);
    float *vetor;
    vetor = malloc(n * sizeof(float));
    for(i=0; i<n; i++){
        vetor[i] = rand()%100;
    }

    for(i=0; i<n; i++){
        printf("%0.1f  ", vetor[i]);
    }

    qsort(vetor, n, sizeof(int), compare); //compara todos os valores do vetor dado, e os ordena dentro do vetor

    printf("\n");
	
    for(i= 0; i<n; i++){
        printf("%0.1f  ", vetor[i]);
    }

    free(vetor);
}