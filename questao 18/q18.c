#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplicar_matriz(int **a, int **b, int  **c, int nla, int nca, int ncb){
    int i, j, k, l;
    int nlb = nca, nlc = nla, ncc = ncb;
    srand(time(NULL));

    for(i=0; i<nla; i++) {
        for(j=0; j<nca; j++){
            a[i][j]=rand()%10;
        }
    }

    for(i=0; i<nlb; i++) {
        for(j=0; j<ncb; j++) {
            b[i][j]=rand()%10;
        }
    }

    for(i=0; i<nla; i++) {
        for(j=0; j<ncb; j++) {
            c[i][j]=0;
            for(k=0; k<nca; k++){
                l = l+a[i][k]*b[k][j];
            }
            c[i][j] = l; l=0;
        }
    }
}

    int main() {

        int i, j, nla, nca, nlb, ncb;
        int **a, **b, **c;

        printf("Informe as linhas da matriz A: ");
        scanf("%d",&nla);
        printf("Informe as colunas da matriz A: ");
        scanf("%d",&nca);
        printf("Informe as colunas da matriz B: ");
        scanf("%d",&ncb);

        nlb = nca;

        a = malloc(nla*sizeof (int*));
        for(i=0; i<nla; i++){
            a[i] = malloc(nca*sizeof (int));
        }

        b = malloc(nca*sizeof (int*));
        for(i=0; i<nca; i++){
            b[i] = malloc(ncb*sizeof (int));
        }

        c = malloc(nla*sizeof (int*));
        for(i=0; i<nla; i++){
            c[i] = malloc(ncb*sizeof (int));
        }

        (*multiplicar_matriz)(a, b, c, nla, nca, ncb);

        printf("Matriz A: \n");
        for(i = 0; i < nla; i++) {
            for(j = 0; j < nca; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        printf("Matriz B: \n");
        for(i = 0; i < nca; i++) {
            for(j = 0; j < ncb; j++) {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }

        printf("Matriz C: \n");

        for(i = 0; i < nla; i++) {
            for(j = 0; j < ncb; j++) {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        
        free(a[0]);
        free(a);
        free(b[0]);
        free(b);
        free(c[0]);
        free(c);

        return 0;

    }