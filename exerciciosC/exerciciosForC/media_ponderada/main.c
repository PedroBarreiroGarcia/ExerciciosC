#include <stdio.h>

int main()
{
    /*Leia um valor inteiro N, que representa o n�mero de casos de teste que vem a seguir. Cada caso de
    teste consiste de 3 valores reais, para os quais voc� dever� calcular e mostrar a m�dia ponderada, sendo
    que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
    que a m�dia ponderada � a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
    pela soma dos pesos.*/

    int n,i;
    double x1,x2,x3,media;

    printf("Quantos casos voce vai digitar?");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("Digite tres numeros: \n");
        scanf("%lf", &x1);
        scanf("%lf", &x2);
        scanf("%lf", &x3);

        media = ((x1*2)+(x2*3)+(x3*5))/10;

        printf("MEDIA = %.1lf \n\n", media);
    }

    return 0;
}
