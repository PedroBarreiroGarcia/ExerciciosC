#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
    mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
    venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
    proporcionaram:
     lucro < 10%
     10% ≤ lucro ≤ 20%
     lucro > 20%
    Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
    o lucro total. */

    int i,n,abaixoDe10,abaixoDe20,maiorDe20;
    double porcentagemLucro,somaVenda,somaCompra,lucroTotal;

    printf("Serao digitados quantos produtos? ");
    scanf("%d", &n);

    double precoCompra[n];
    double precoVenda[n];
    char produto[n][50];

    for (int i=0; i<n; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", &produto[i][0]);
        printf("Preco de compra: ");
        scanf("%lf", &precoCompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &precoVenda[i]);
    }

    abaixoDe10=0;
    abaixoDe20=0;
    maiorDe20=0;

    for (int i=0; i<n; i++) {
        porcentagemLucro= (precoVenda[i]-precoCompra[i]) *100/precoCompra[i];

        if(porcentagemLucro>20){
            maiorDe20++;
        }else if((porcentagemLucro>=10) && (porcentagemLucro<=20)){
            abaixoDe20++;
        }else{
            abaixoDe10++;
        }
    }

    somaCompra=0;
    somaVenda=0;
    lucroTotal=0;

    for (int i=0; i<n; i++) {
        somaCompra=somaCompra + precoCompra[i];
        somaVenda=somaVenda +precoVenda[i];
    }

    lucroTotal = somaVenda - somaCompra;

    printf("\n\nRELATORIO: \n");
    printf("Lucro abaixo de 10%%: %d\n",abaixoDe10 );
    printf("Lucro entre 10%% e 20%%: %d\n",abaixoDe20 );
    printf("Lucro acima de 20%%: %d\n",maiorDe20);
    printf("Valor total de compra: %.2lf\n",somaCompra);
    printf("Valor total de venda: %.2lf\n",somaVenda);
    printf("Lucro toral: %.2lf\n", lucroTotal);

    return 0;
}
