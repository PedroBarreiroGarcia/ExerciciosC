#include <stdio.h>

int main()
{
    /*Uma lanchonete possui v�rios produtos. Cada produto possui um c�digo
    e um pre�o. Voc� deve fazer um programa para ler o c�digo e a
    quantidade comprada de um produto (suponha um c�digo v�lido), e da�
    informar qual o valor a ser pago, com duas casas decimais, conforme
    tabela de produtos ao lado. */


    int codigo, qtd;
    double pagar;

    printf("Codigo do produto comprado (1), (2), (3), (4) ou (5): ");
    scanf("%d", &codigo);

    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    if (codigo == 1) {
        pagar = qtd * 5.00;
    }
    else if (codigo == 2) {
        pagar = qtd * 3.50;
    }
    else if (codigo == 3) {
        pagar = qtd * 4.80;
    }
    else if (codigo == 4) {
        pagar = qtd * 8.90;
    }
    else if (codigo == 5) {
        pagar = qtd * 7.32;
    }

	printf("Valor a pagar: R$ %.2lf\n", pagar);

	return 0;
}
