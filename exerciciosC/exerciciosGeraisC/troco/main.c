#include <stdio.h>

int main()
{
    /*Fazer um programa para calcular o troco no processo de pagamento de um
    produto de uma mercearia. O programa deve ler o preço unitário do produto,
    a quantidade de unidades compradas deste produto,e o valor em dinheiro dado
    pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
    mostrar o valor do troco a ser devolvido ao cliente. */

    int quantidade;
    double preco, dinheiro,troco;

    printf("Preco unitario do produto: R$ ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: R$ ");
    scanf("%lf", &dinheiro);

    troco=dinheiro-(preco*quantidade);

    printf("Troco: R$ %.2lf ", troco);

    return 0;
}
