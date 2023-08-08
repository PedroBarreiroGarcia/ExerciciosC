#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    //scanf serve para ler texto ou dados que n�o tem espa�o entre si, por exemplo: Pedro
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite o valor da idade: ");
    scanf("%d", &idade);
    printf("Digite o valor do salario: ");
    scanf("%lf", &salario);
    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);

    /*assim seria sem chamar a fun��o ler_texto
    printf("Digite o nome da pessoa: ");
    //para inserir o valor no vetor de texto � preciso chamar a seguinte fun��o:
    limpar_entrada();
    //nome da vari�vel, tamanho da vari�vel, arquivo que far� consulta (no caso estamos pegando os dados da entrada padr�o)
    fgets(nome,50,stdin);
    //o seguinte comando faz com que o enter (a quebra de linha) n�o seja armazenado no vetor nome
    strtok(nome,"\n");*/

    //com a fun��o ler_texto
    printf("Digite o nome da pessoa: ");
    limpar_entrada();
    ler_texto(nome,50);

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("NOME = %s\n", nome);

    return 0;
}
