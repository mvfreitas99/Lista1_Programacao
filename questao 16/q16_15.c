#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordena(int a){
    int i,n,j;
    clock_t um;
    float temp=0.0f;
    srand(time(NULL));
    float *vetor;
    vetor = malloc(a * sizeof(float));
    for(i=0; i<a; i++){
        vetor[i]=rand()%100;
    }

    //for(i= 0; i<m; i++){
    //    printf("%0.1f  ", vetor[i]);
    //}

    printf("\n");

    um = clock();

    for(i=0; i<a; i++){
        for(j=0; j<a-i-1; j++){
            if(vetor[j] > vetor[j+1]){
                temp = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    um = clock() - um;

    //for(i=0; i<m; i++){
    //    printf("%0.1f  ", vetor[i]);
    //}

    printf("%f segundos.\n", ((float)um)/CLOCKS_PER_SEC);
}

int main(){
    int n = 10000;
    printf("A quantidade de elementos será 10.000\n");
    //scanf("%d", &n);
    (*ordena)(n);
    
}