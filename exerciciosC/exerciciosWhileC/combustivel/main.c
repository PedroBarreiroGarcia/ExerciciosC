#include <stdio.h>

int main()
{
    /*Um posto de combust�veis deseja determinar qual de seus produtos tem a
    prefer�ncia de seus clientes. Escreva um algoritmo para ler o tipo de
    combust�vel abastecido (codificado da seguinte forma: 1.�lcool 2.Gasolina
    3.Diesel 4.Fim). Caso o usu�rio informe um c�digo inv�lido
    (fora da faixa de 1 a 4) deve ser solicitado um novo c�digo
    (at� que seja v�lido). O programa ser� encerrado quando o c�digo informado
    for o n�mero 4, devendo ent�o mostrar a mensagem "MUITO OBRIGADO", bem
    como as quantidades de cada combust�vel.*/

    int codigo, alcool=0, gasolina=0, diesel=0;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &codigo);

    while (codigo != 4) {
        if (codigo == 1) {
            alcool++;
        }
        else if (codigo == 2) {
            gasolina++;
        }
        else if (codigo == 3) {
            diesel++;
        }
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &codigo);
    }

    printf("Muito Obrigado !!\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

	return 0;
}
