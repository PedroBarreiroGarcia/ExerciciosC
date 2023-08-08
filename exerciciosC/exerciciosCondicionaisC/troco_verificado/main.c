#include <stdio.h>

int main()
{
    /*Fazer um programa para calcular o troco no processo de pagamento de
    um produto de uma mercearia. O programa deve ler o preço unitário do produto,
    a quantidade de unidades compradas deste produto, e o valor em dinheiro dado
    pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
    ao cliente. Se o dinheiro dado pelo cliente não for suficiente,
    mostrar uma mensagem informando o valor restante*/

    double preco,dinheiro,troco,faltou;
    int quantia;

    printf("Preco unitario do produto: R$ ");
    scanf("%lf", &preco);
    printf("Quantia comprada: ");
    scanf("%d", &quantia);
    printf("Dinheiro recebido: R$ ");
    scanf("%lf", &dinheiro);

    preco=preco*quantia;

    if (dinheiro>= preco){
        troco= dinheiro- preco;
        printf("Troco= R$ %.2lf", troco);
    }else{
        faltou= preco- dinheiro;
        printf("Dinheiro insuficiente. Faltam R$ %.2lf ", troco);
    }

    return 0;
}
