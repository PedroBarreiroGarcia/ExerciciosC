#include <stdio.h>

int main()
{
    /*Fazer um programa para ler três medidas A, B e C. Em seguida,
    calcular e mostrar (imprimir os dados com quatro casas decimais):
    a) a área do quadrado que tem lado A
    b) a área do triângulo retângulo que base A e altura B
    c) a área do trapézio que tem bases A e B, e altura C*/

    double a,b,c,areaQuadrado,areaTriangulo,areaTrapezio ;

    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);

    areaQuadrado=a*a;
    areaTriangulo= a*b/2;
    areaTrapezio=(a+b)*c/2;

    printf("Area do quadrado: %.4lf \n", areaQuadrado);
    printf("Area do triangulo: %.4lf \n", areaTriangulo);
    printf("Area do trapezio: %.4lf \n", areaTrapezio);

    return 0;
}
