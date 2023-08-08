#include <stdio.h>

int main()
{
    int n,numNegativos=0, i, j;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nDiagonal principal:\n");
    for(i=0; i<n; i++){
        printf("%d  ",mat[i][i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (mat[i][j]<0){
                numNegativos++;
            }
        }
    }
    printf("\nQuantidade negativos: %d", numNegativos);

    return 0;
}
