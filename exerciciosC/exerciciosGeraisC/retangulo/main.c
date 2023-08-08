#include <stdio.h>
//biblioteca que tem a fun��o de raiz quadrada
#include <math.h>

int main(){
    double base, altura, area, perimetro, diagonal;

    printf("Digite valor da base do retangulo:");
    scanf("%lf", &base);
    printf("Digite valor da altura do retangulo:");
    scanf("%lf", &altura);

    area=base*altura;
    perimetro=(base*2)+(altura*2);
    //sqrt= fun��o para extrair raiz quadrada
    //pow= fun��o de potencia��o, colocamos a vari�vel e depois o expoente
    diagonal=sqrt(pow(base,2.0)+pow(altura,2.0));

    printf("Area= %.4lf\n",area);
    printf("Perimetro= %.4lf\n",perimetro);
    printf("Diagonal= %.4lf\n",diagonal);

    return 0;
}
