#include <stdio.h>
int main()
{
    /*Fazer um programa para ler a quantidade de glicose
    no sangue de uma pessoa e depois mostrar na tela a
    classificação desta glicose de acordo com a tabela de
    referência ao lado.

    Classificação Glicose
    Normal      Até 100 mg/dl
    Elevado     Maior que 100 até 140 mg/dl
    Diabetes    Maior de 140 mg/dl */

    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    if(glicose<=100){
        printf("Classificacao: normal");
    }else if (glicose<=140){
        printf("Classificacao: elevado");
    }else{
        printf("Classificacao: diabetes");
    }

    return 0;
}
