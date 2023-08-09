#include <stdio.h>

int main()
{
    /*Uma lanchonete possui vários produtos. Cada produto possui um código
    e um preço. Você deve fazer um programa para ler o código e a
    quantidade comprada de um produto (suponha um código válido), e daí
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
