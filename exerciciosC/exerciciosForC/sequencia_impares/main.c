#include <stdio.h>

int main()
{
    /*Leia um valor inteiro X. Em seguida mostre os �mpares de 1 at� X, um valor por linha, inclusive o X,
    se for o caso. */

    int x,i;

    printf("Digite o valor x: ");
    scanf("%d", &x);

    for(i=1;i<=x;i++){
        if(i%2 == 1){
            printf("%d \n", i);
        }
    }

    return 0;
}
