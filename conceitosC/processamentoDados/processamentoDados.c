#include <stdio.h>

int main (){
    int x, y, x1;
    x = 5;
    y = 2 * x;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("\n");

    double y1;
    x1 = 5;
    y1 = 2 * x1;
    printf("%d\n", x1);
    printf("%.1lf\n", y1);
    printf("\n");

    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;
    printf("%lf\n", area);
    printf("\n");

    int a, b, resultado;
    a = 5;
    b = 2;
    //se pegarmos dois números inteiros e dividirmos um pelo outro o compilador vai entender que queremos somente o número inteiro da divisão
    resultado = a / b;
    printf("%d\n", resultado);
    printf("\n");

    double a1;
    int by;
    a1 = 5.0;
    //o (int) mostra que queremos converter o double para int
    by = (int) a1;
    printf("%d\n", by);



    return 0;
}
