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
    clock_t um;
    printf("A quantidade de elementos será 10.000\n");
    //scanf("%d", &n);
    n = 10000;
    float *vetor;
    vetor = malloc(n * sizeof(float));
    for(i=0; i<n; i++){
        vetor[i] = rand()%100;
    }

    //for(i=0; i<n; i++){
    //    printf("%0.1f  ", vetor[i]);
    //}

    um = clock();
    qsort(vetor, n, sizeof(int), compare); //compara todos os valores do vetor dado, e os ordena dentro do vetor
    um = clock() - um;

    printf("\n");
	
    //for(i= 0; i<n; i++){
    //    printf("%0.1f  ", vetor[i]);
    //}

    printf("%f segundos.\n", ((float)um)/CLOCKS_PER_SEC);

    free(vetor);
}