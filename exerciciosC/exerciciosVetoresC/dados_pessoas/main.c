#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
    que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
    de homens. */

    int i, n;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    double altura[n];
    char genero[n];

    for ( i=0; i<n; i++) {
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &altura[i]);
        printf("Genero da %da pessoa: ", i + 1);
        scanf(" %c", &genero[i]);
    }

    double menorAltura,maiorAltura;
    menorAltura=altura[0];
    maiorAltura=altura[0];

    for (int i=0; i<n; i++) {
        if(altura[i]<menorAltura){
            menorAltura=altura[i];
        }else if(altura[i]>maiorAltura) {
            maiorAltura=altura[i];
        }
    }

    printf("\nMenor altura: %.2lf",menorAltura);
    printf("\nMaior altura: %.2lf",maiorAltura);

    double somaFeminino;
    int contFeminino=0;

    for (int i=0; i<n; i++) {
        if(genero[i]=='F'){
            somaFeminino=somaFeminino+altura[i];
            contFeminino++;
        }
    }

    double mediaFeminino;
    mediaFeminino = somaFeminino/contFeminino;

    printf("\nMedia das alturas das das mulheres: %.2lf", mediaFeminino);

    int numMasculino;

    numMasculino=n-contFeminino;

    printf("\nNumero de homens: %d",numMasculino);

    return 0;
}
