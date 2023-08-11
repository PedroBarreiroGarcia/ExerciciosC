#include <stdio.h>

int main()
{
    /*Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
    tela todos os números pares, e também a quantidade de números pares. */

    int n,i,cont;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &n);

    int vet[n];

    for(i=0;i<n;i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    cont=0;
    printf("\n\nNUMEROS PARES:\n");

    for(i=0;i<n;i++){
        if(vet[i]%2 == 0){
           printf("%d ",vet[i]);
           cont++;
        }
    }

    printf("\n\nQuantidade de pares: %d", cont);


    return 0;
}
