#include <stdio.h>

int main()
{
    /*Escreva um algoritmo que leia dois n�meros e imprima o resultado da divis�o do primeiro pelo
    segundo. Caso n�o for poss�vel, mostre a mensagem �DIVISAO IMPOSSIVEL�. */

    int n,i;
    double x,y,divisao;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("Entre com o numerador:");
        scanf("%lf", &x);
        printf("Entre com o denominador:");
        scanf("%lf", &y);

        if(y==0){
            printf("DIVISAO IMPOSSIVEL\n\n");
        }else{
            divisao=x/y;
            printf("DIVISAO = %.2lf\n\n", divisao);
        }
        divisao=0;
    }

    return 0;
}
