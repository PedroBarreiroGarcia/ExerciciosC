#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Primeiro valor:");
    scanf("%d", &a);
    printf("Segundo valor:");
    scanf("%d", &b);
    printf("Terceiro valor:");
    scanf("%d", &c);

    if (a<b && a<c){
        printf("\nMenor: %d\n", a);
    }else if (b<c){
        printf("\nMenor: %d\n", b);
    }else{
        printf("\nMenor: %d\n", c);
    }
    return 0;
}
