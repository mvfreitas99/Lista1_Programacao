#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void somar(char **a, char **b, char **c, int size){
    int *x, *y, *z, i;

    x = malloc(size*sizeof(int));
    y = malloc(size*sizeof(int));
    z = malloc(size*sizeof(int));

    for(i=0; i<size; i++){
        x[i]=0;
        y[i]=0;
        z[i]=0;
        x[i]=rand()%100;
        y[i]=rand()%100;
        z[i]=x[i] + y[i];
    }
    
    printf("Vetor %s: \n", a);
    
    for(i=0; i<size; i++){
        printf("%d ", x[i]);
    }
    printf("\nVetor %s: \n", b);
    
    for(i=0; i<size; i++){
        printf("%d ", y[i]);
    }

    printf("\nVetor %s: \n", c);
    
    for(i=0; i<size; i++){
        printf("%d ", z[i]);
    }
    printf("\n");
}

int main(){
    int size;
    char **one, **two, **sum;
    one = malloc(sizeof(char*));
    two = malloc(sizeof(char*));
    sum = malloc(sizeof(char*));

    printf("nome do primeiro vetor: " );
    gets(one);

    printf("nome do segundo vetor: ");
    gets(two);

    printf("nome do vetor soma: " );
    gets(sum);

    printf("tamanho do vetores: ");
    scanf("%d", &size);

    (*somar)(one, two, sum, size);
}