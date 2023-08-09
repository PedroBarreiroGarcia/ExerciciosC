#include <stdio.h>

int main()
{
    /*Uma empresa vai conceder um aumento percentual de sal�rio aos seus
    funcion�rios dependendo de quanto cada pessoa ganha, conforme tabela ao lado.
    Fazer um programa para ler o sal�rio de uma pessoa, da� mostrar qual o novo
    sal�rio desta pessoa depois do aumento, quanto foi o aumento e qual foi a
    porcentagem de aumento

    Sal�rio atual                           Aumento
    At� R$ 1000.00                             20%
    Acima de R$ 1000.00 at� R$ 3000.00         15%
    Acima de R$ 3000.00 at� R$ 8000.00         10%
    Acima de R$ 8000.00                        5%
    */

    double salario,novoSalario,aumento, porcetagem;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if(salario<=1000){
       porcetagem=20;
    }else if(salario<=3000){
        porcetagem=15;
    }else if(salario<=8000){
        porcetagem=10;
    }else{
        porcetagem=5;
    }

    aumento= salario*porcetagem / 100;
    novoSalario=salario+aumento;

    printf("Novo salario= R$ %.2lf \n", novoSalario);
    printf("Aumento= R$ %.2lf\n", aumento);
    printf("Porcentagem = %d %%\n", porcetagem);

    return 0;
}
