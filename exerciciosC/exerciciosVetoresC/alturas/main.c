#include <stdio.h>

int main()
{
    int n, numMenores=0;

    printf(" Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];
    double alturas[n], somaAltura=0, mediaAltura=0, percentualMenores=0;

    for(int i=0; i<n; i++){
        printf("Digite os dados da %da pessoa: \n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    for(int i=0; i<n; i++){
        somaAltura=somaAltura+alturas[i];
    }
    mediaAltura=somaAltura/n;
    printf("Altura media: %.2lf\n", mediaAltura);

    for(int i=0; i<n; i++){
        if(idades[i]<16){
            numMenores++;
        }
    }
    percentualMenores= numMenores * 100.0/n;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", percentualMenores);

    for(int i=0; i<n; i++){
        if(idades[i]<16){
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
