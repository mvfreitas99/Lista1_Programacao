#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i, n, j;
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

    printf("\n");
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(vetor[j] > vetor[j+1]){
                temp=vetor[j+1];
                vetor[j+1]=vetor[j];
                vetor[j]=temp;
            }
        }
    }

    for(i= 0; i<n; i++){
        printf("%0.1f  ", vetor[i]);
    }

    free(vetor);
}