#include <stdio.h>

int main()
{
    /*Fa�a um programa que leia N n�meros reais e armazene-os em um vetor. Em seguida, mostrar na tela
    o maior n�mero do vetor (supor n�o haver empates). Mostrar tamb�m a posi��o do maior elemento,
    considerando a primeira posi��o como 0 (zero). */

    int i,n,aux;
    double maior;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &n);

    int vet[n];

    for(i=0;i<n;i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    maior=vet[0];
    aux= 0;

    for(i=0;i<n;i++){
        if(vet[i] > maior){
            maior=vet[i];
            aux= i;
        }
    }

    printf("\nMAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d", aux);


    return 0;
}
