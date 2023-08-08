#include <stdio.h>

int main (){
    int x, y;
    x = 5;
    y = 2 * x;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("\n");

    double num;
    num = 2.3456;
    printf("%.2lf\n", num);
    printf("\n");


    int idade;
    double salario;
    char nome[50];
    char sexo;
    idade = 32;
    salario = 4560.9;
    strcpy(nome, "Maria Silva");
    sexo = 'F';
    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos\n", nome, sexo, salario, idade);

    return 0;
}
