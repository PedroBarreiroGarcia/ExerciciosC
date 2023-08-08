#include <stdio.h>
#include <stdlib.h>

int main(){
    double lar, compri, mQuadrado, area, preco;

    printf("Digite a largura do terreno:");
    scanf ("%lf",&lar);

    printf("Digite a comprimento do terreno:");
    scanf ("%lf",&compri);

    printf("Digite valor do metro quadrado:");
    scanf ("%lf",&mQuadrado);

    area=lar*compri;
    preco=area*mQuadrado;

    printf("\nArea do terreno= %.2lf\n",area);
    printf("Preco do terreno= %.2lf\n",preco);

    return 0;
}
