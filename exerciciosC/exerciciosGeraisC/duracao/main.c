#include <stdio.h>

int main()
{
    /*Fazer um programa para ler uma dura��o de tempo em segundos,
    da� imprimir na tela esta dura��o no formato horas:minutos:segundos.*/

    int duracao,hora,min,segundos,resto;

    printf("Digite a duracao em segundos:");
    scanf("%d",&duracao);

    hora=duracao/3600;
    resto=duracao%3600;

    min=resto/60;
    segundos=resto%60;

    printf("%d : %d : %d", hora, min, segundos );

    return 0;
}
