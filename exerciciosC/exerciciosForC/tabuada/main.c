#include <stdio.h>

int main()
{
    int n, i, multi;

    printf("Deseja a tabuada de qual numero? ");
    scanf("%d", &n);

    for( i=1; i<=10; i++){
        multi=i*n;
        printf("%d x %d = %d\n", n, i, multi);
    }
    return 0;
}
