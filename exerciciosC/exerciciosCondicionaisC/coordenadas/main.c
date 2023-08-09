#include <stdio.h>

int main()
{
    /*Leia os valores das coordenadas X e Y de um ponto no plano cartesiano.
    A seguir, determine qual o quadrante ao qual pertence o ponto (Q1, Q2, Q3 ou Q4).
    Se o ponto estiver na origem, escreva a mensagem �Origem�. Se o ponto estiver
    sobre um dos eixos escreva �Eixo X� ou �Eixo Y�, conforme for a situa��o.*/

    double x,y;

    printf("Valor de X: ");
    scanf("%lf",&x);
    printf("Valor de Y: ");
    scanf("%lf",&y);

    if (x == 0 && y == 0) {
        printf("Origem\n");
    }
    else if (x == 0) {
        printf("Eixo Y\n");
    }
    else if (y == 0) {
        printf("Eixo X\n");
    }
    else if (x > 0 && y > 0) {
        printf("Q1\n");
    }
    else if (x < 0 && y > 0) {
        printf("Q2\n");
    }
    else if (x < 0 && y < 0) {
        printf("Q3\n");
    }
    else {
        printf("Q4\n");
    }

    return 0;
}
