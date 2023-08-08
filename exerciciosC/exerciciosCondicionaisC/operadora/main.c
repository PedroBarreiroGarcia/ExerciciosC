#include <stdio.h>

int main()
{
    /*Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá
    direito a 100 minutos de telefone. Cada minuto que exceder a franquia de
    100 minutos custa R$ 2.00. Fazer um programa para ler a quantidade de
    minutos que uma pessoa consumiu, daí mostrar o valor a ser pago. */

    int min;
    double valor;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &min);

    if(min<100){
        printf("Valor a pagar: R$ 50,00");
    }else{
        valor= 50+((min-100)*2);
        printf("Valor a pagar: R$ %.2lf",valor);
    }

    return 0;
}
