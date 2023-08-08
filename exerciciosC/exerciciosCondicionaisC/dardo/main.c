#include <stdio.h>

int main()
{
    /*No arremesso de dardo, o atleta tem três chances para lançar o dardo
    à maior distância que conseguir. Você deve criar um programa para,
    dadas as medidas das três tentativas de lançamento, informar qual foi a maior.*/

    double dist1,dist2,dist3;

    printf("Digite as tres distancias: \n");
    scanf("%lf", &dist1);
    scanf("%lf", &dist2);
    scanf("%lf", &dist3);

    if ((dist1>dist2) && (dist1>dist3)){
        printf("Maior Distancia= %.2lf m", dist1);
    }else if((dist2>dist1) && (dist2>dist3)){
        printf("Maior Distancia= %.2lf m ", dist2);
    }else{
        printf("Maior Distancia= %.2lf m ", dist3);
    }

    return 0;
}
