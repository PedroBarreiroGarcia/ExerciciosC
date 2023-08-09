#include <stdio.h>


int main()
{
    /*Maria acabou de iniciar seu curso de gradua��o na faculdade de medicina e precisa de sua ajuda para
    organizar os experimentos de um laborat�rio o qual ela � respons�vel. Ela quer saber no final do ano,
    quantas cobaias foram utilizadas no laborat�rio e o percentual de cada tipo de cobaia utilizada. Este
    laborat�rio em especial utiliza tr�s tipos de cobaias: sapos, ratos e coelhos. Para obter estas
    informa��es, ela sabe exatamente o n�mero de experimentos que foram realizados, o tipo de cobaia
    utilizada e a quantidade de cobaias utilizadas em cada experimento. Fa�a um programa que leia um
    valor inteiro N que indica os v�rios casos de teste que vem a seguir. Cada caso de teste cont�m um
    inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
    de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
    cobaia utilizada e o percentual de cada uma em rela��o ao total de cobaias utilizadas, sendo que o
    percentual deve ser apresentado com dois d�gitos ap�s o ponto*/

    int n, ratos, sapos, coelhos, qtdcobaias, total;
    char tipo;
    double pratos, psapos, pcoelhos;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &n);

	ratos = 0;
	sapos = 0;
	coelhos = 0;

    for (int i=0; i<n; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &qtdcobaias);
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        if (tipo == 'R') {
            ratos = ratos + qtdcobaias;
        }
        else if (tipo == 'S') {
            sapos = sapos + qtdcobaias;
        }
        else {
            coelhos = coelhos + qtdcobaias;
        }
    }

    total = ratos + sapos + coelhos;
    pcoelhos = ((double)coelhos / total) * 100.0;
    pratos = ((double)ratos / total) * 100.0;
    psapos = ((double)sapos / total) * 100.0;

	printf("\nRELATORIO FINAL:\n");
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf\n", pcoelhos);
    printf("Percentual de ratos: %.2lf\n", pratos);
    printf("Percentual de sapos: %.2lf\n", psapos);

    return 0;
}
