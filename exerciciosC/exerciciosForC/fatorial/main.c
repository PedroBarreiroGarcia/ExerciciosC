#include <stdio.h>


int main()
{
    /*Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
    fatorial de N. */

    int n,i,fat;

    printf("Digite o valor de N:");
    scanf("%d", &n);

    fat=1;

    for(i=1;i<=n;i++){
        fat=fat*i;
    }

    printf("FATORIAL = %d \n", fat);

    return 0;
}
