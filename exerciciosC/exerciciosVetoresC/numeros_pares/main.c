#include <stdio.h>

int main()
{
    /*Fa�a um programa que leia N n�meros inteiros e armazene-os em um vetor. Em seguida, mostre na
    tela todos os n�meros pares, e tamb�m a quantidade de n�meros pares. */

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
