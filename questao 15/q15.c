#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordena(int m){
    int i,n,j;
    float temp=0.0f;
    srand(time(NULL));
    float *vetor;
    vetor = malloc(m*sizeof(float));
    for(i=0; i<=m; i++){
        vetor[i]=rand()%100;
    }

    for(i= 0; i<m; i++){
        printf("%0.1f  ", vetor[i]);
    }

    printf("\n");

    for(i=0; i<m; i++){
        for(j=0; j<m-i-1; j++){
            if(vetor[j] > vetor[j+1]){
                temp = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    for(i=0; i<m; i++){
        printf("%0.1f  ", vetor[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("Informe quantidade de elementos: ");
    scanf("%d", &n);
    (*ordena)(n);
}