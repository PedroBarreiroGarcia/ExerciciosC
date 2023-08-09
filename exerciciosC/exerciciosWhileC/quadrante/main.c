#include <stdio.h>

int main()
{
    /*Escreva um programa para ler as coordenadas (X,Y) de uma quantidade
    indeterminada de pontos no sistema cartesiano. Para cada ponto escrever
    o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O algoritmo ser� encerrado
    quando pelo menos uma de duas coordenadas for NULA (nesta situa��o sem
    escrever mensagem alguma). */

    double x,y;

    printf("Digite os valores das coordenadas X e Y:\n");
    scanf("%lf", &x);
    scanf("%lf", &y);

    while(x!=0 && y!=0){
        if (x > 0 && y > 0) {
            printf("QUADRANTE 01\n\n");
        }
        else if (x < 0 && y > 0) {
            printf("QUADRANTE 02\n\n");
        }
        else if (x < 0 && y < 0) {
            printf("QUADRANTE 03\n\n");
        }
        else {
            printf("QUADRANTE 04\n\n");
        }

        printf("Digite os valores das coordenadas X e Y:\n");
        scanf("%lf", &x);
        scanf("%lf", &y);
    }

    return 0;
}
