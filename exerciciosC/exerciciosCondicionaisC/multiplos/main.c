#include <stdio.h>

int main()
{
    /*Fazer um programa para ler dois n�meros inteiros, e dizer se um n�mero �
    m�ltiplo do outro. Os n�meros podem ser digitados em qualquer ordem*/

    int n1, n2;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if((n1%n2==0) || (n2%n1==0)){
        printf("Sao multiplos\n");
    }else{
        printf("Nao sao multiplos\n");
    }

    return 0;
}
