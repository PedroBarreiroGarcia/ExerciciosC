#include <stdio.h>

int main()
{
    /*Leia a hora inicial e a hora final de um jogo. A seguir calcule a
    duração do jogo, sabendo que o mesmo pode começar em um dia e terminar
    em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.*/

    int horaInicial,horaFinal, duracao;

    printf("Hora inicial: ");
    scanf("%d",&horaInicial);
    printf("Hora final: ");
    scanf("%d",&horaFinal);

    if (horaInicial< horaFinal){
        duracao= horaFinal-  horaInicial;
    }else{
        duracao= (24- horaInicial) + horaFinal;
    }

    printf("O jogo durou %d hora(s)\n", duracao);

    return 0;
}
