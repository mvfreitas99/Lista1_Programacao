#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void multiplica(int **a, int **b, int  **c, int nla, int nca, int ncb){
    int i, j,x, p;
    srand(time(NULL));
    int nlb = nca, nlc = nla, ncc = ncb;

    for(i = 0; i < nla; i++) {
        for(j = 0; j < nca; j++){
            a[i][j]=rand()%10;
        }
    }

    for(i = 0; i < nlb; i++) {
        for(j = 0; j < ncb; j++) {
            b[i][j]=rand()%10;
        }
    }

    for(i = 0; i < nlc; i++) {
        for(j = 0; j < ncc; j++) {
            x=0;
            for(p=0; p<ncc; p++){
                x=x+a[i][p]*b[p][j];
            }
            c[i][j]=x;
        }
    }
}

    int main() {

        int i, j, nla, nca, nlb, ncb;
        int **a, **b, **c;

        printf("\n Informe as linhas da matriz A : ");
        scanf("%d",&nla);
        //printf("\n Informe a quantidade de colunas da matriz A : ");
        //scanf("%d",&nca);
        printf("\n Informe as colunas da matriz B : ");
        scanf("%d",&ncb);
        printf("\n Informe as linhas da matriz B : ");
        scanf("%d",&nlb);

        nca = nlb;

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

        (*multiplica)(a, b, c, nla, nca, ncb);

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