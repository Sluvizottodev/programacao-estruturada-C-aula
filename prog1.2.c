#include <stdlib.h>
#include <stdio.h>

char* nomeFunc();
int aniversarioFunc();
float salarioFunc();
char PosChefia();

int main()
{
    char* nome = nomeFunc();
    printf("Nome do funcionario: %s\n", nome);
    int aniversario = aniversarioFunc();
    printf("Aniversario do funcionario: %d\n", aniversario);
    float salario = salarioFunc();
    printf("Salario do funcionario: %.2f\n", salario);
    char posicao = PosChefia();
    printf("O funcionario está em posição de chefia? %c\n", posicao);


    return 0;
}

char* nomeFunc(){
    char* nomeFuncionario = (char*) malloc(50 * sizeof(char));
    printf("Digite o nome do funcionario: ");
    scanf("%s", nomeFuncionario);
    return nomeFuncionario;
}

int aniversarioFunc(){
    int dia, mes, ano;
    printf("Digite a data de nascimento do funcionario: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    return dia, mes, ano;
}

float salarioFunc(){
    float salario;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    return salario;
}

char PosChefia(){
    char posicao;
    printf("O funcionário está em posição de chefia? (S/N): ");
    scanf("%c", &posicao);
    return posicao;
}