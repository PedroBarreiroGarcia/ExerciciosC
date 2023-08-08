#include <stdio.h>

int main()
{
    /*Deseja-se converter uma medida de temperatura da escala Celsius
    para Fahrenheit ou vice-versa. Para isso, voc� deve construir um
    programa que leia a letra "C" ou "F" indicando em qual escala vai ser
    informada uma temperatura. Em seguida o programa deve mostrar a temperatura
    na outra escala com duas casas decimais. A seguir � dada a f�rmula para
    converter de Fahrenheit para Celsius (voc� devededuzir a f�rmula de Celsius
    para Fahrenheit): C=5/9(F-32) */

    char escala;
    double celsius, fahrenheit;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escala);

    if (escala == 'F') {
        printf("Digite a temperatura em Fahrenheit: ");
		scanf("%lf", &fahrenheit);

        celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
        printf("Temperatura equivalente em Celsius: %.2lf\n", celsius);
    }
    else {
        printf("Digite a temperatura em Celsius: ");
		scanf("%lf", &celsius);

        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %.2lf\n", fahrenheit);
    }

	return 0;
}
