#include <stdio.h>

int main()
{
    /*Fa�a um programa que leia as notas referentes �s duas avalia��es de um
    aluno. Calcule e imprima a m�dia semestral. Fa�a com que o algoritmo s�
    aceite notas v�lidas (uma nota v�lida deve pertencer ao intervalo [0,10]).
    Cada nota deve ser validada separadamente. */

    double nota1,nota2,media,soma;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    while((nota1<0) || (nota1>10)){
       printf("Valor invalido! Tente novamente: ");
       scanf("%lf", &nota1);
    }

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    while((nota2<0) || (nota2>10)){
       printf("Valor invalido! Tente novamente: ");
       scanf("%lf", &nota2);
    }

    soma = nota1+nota2;
    media = soma/2;

    printf("Media = %.2lf ", media);

    return 0;
}
