#include <stdio.h>

int main()
{
    /*Leia um valor inteiro N. Este valor ser� a quantidade de n�meros inteiros que ser�o lidos em seguida.
    Para cada valor lido, mostre uma mensagem dizendo se este valor lido � PAR ou IMPAR, e tamb�m
    se � POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa dever� imprimir
    apenas NULO.*/

    int n,i,x;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &n);

    for (i=1;i<=n;i++){
        printf("Digite um numero:");
        scanf("%d", &x);

        if(x%2 == 0){
            if(x==0){
                printf("NULO\n\n");
            }else if(x>0){
                printf("PAR POSITIVO\n\n");
            }else{
                printf("PAR NEGATIVO\n\n");
            }
        }else if (x>0){
            printf("IMPAR POSITIVO\n\n");
        }else{
            printf("IMPAR NEGATIVO\n\n");
        }
    }

    return 0;
}
