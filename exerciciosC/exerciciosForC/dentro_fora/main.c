#include <stdio.h>

int main()
{
    /*Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
    Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo.*/

    int n,x,i,dentro=0,fora=0;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("Digite um numero:");
        scanf("%d", &x);
        if((x>=10) && (x<=20)){
            dentro++;
        }else{
            fora++;
        }
    }

    printf ("\n %d DENTRO\n", dentro);
    printf (" %d FORA\n", fora);

    return 0;
}
