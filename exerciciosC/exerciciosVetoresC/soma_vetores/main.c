#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
    terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
    o vetor C gerado.*/

    int i,n;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &n);

    int vetA[n];
    int vetB[n];
    int vetC[n];

    printf("\nDigite os valores do vetor A: \n");
    for(i=0;i<n;i++){
        scanf("%d", &vetA[i]);
    }

    printf("\nDigite os valores do vetor B: \n");
    for(i=0;i<n;i++){
        scanf("%d", &vetB[i]);
    }


    for(i=0;i<n;i++){
        vetC[i]=vetB[i] + vetA[i];
    }

    printf("\nVETOR RESULTANTE: ");
    for(i=0;i<n;i++){
        printf("%d \n",vetC[i]);
    }

    return 0;

}
