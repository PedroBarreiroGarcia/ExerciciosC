#include <stdio.h>

int main()
{
    double raio, area;

    printf("Digite o valor do raio do circulo:");
    scanf("%lf", &raio);

    area = 3.14159 * raio * raio;

    printf("Area = %.3lf\n", area);
    return 0;
}
