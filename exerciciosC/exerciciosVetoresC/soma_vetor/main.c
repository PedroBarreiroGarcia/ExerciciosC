#include <stdio.h>

int main()
{
    int n;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &n);

    double vet[n], soma=0, media=0;
    for (int i=0; i<n; i++){
        printf("Digite um numero:");
        scanf("%lf", &vet[i]);
        soma=soma+vet[i];
    }

    printf("\nValores: ");
    for (int i=0; i<n; i++){
        printf("%.1lf  ", vet[i]);
    }
    printf("\n");

    media=soma/n;
    printf("Soma: %.2lf ", soma);
    printf("\nMedia: %.2lf ", media);

    return 0;
}
