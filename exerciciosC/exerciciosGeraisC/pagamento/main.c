#include <stdio.h>

int main()
{
    /*Fazer um programa para ler o nome de um(a) funcionário(a),
    o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas
    por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
    uma mensagem explicativa, conforme exemplo.*/

    char nome[50];
    double valorHora,pagamento;
    int horasTrabalhadas;

    printf("Nome: ");
    gets(nome);
    printf("Valor por hora: R$ ");
    scanf("%lf", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    pagamento=valorHora*horasTrabalhadas;
    printf("O pagamento para %s deve ser R$ %.2lf ",nome ,pagamento);
    return 0;
}
