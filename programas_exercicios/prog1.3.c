#include <stdlib.h>;
#include <stdio.h>;

char* escreverNomeForm(char* nome, char* sobrenome);

int main(){
    char* nome = (char*) malloc(50 * sizeof(char));
    printf("Digite o nome do funcionario: ");
    scanf ("%s", nome);

    char* sobrenome = (char*) malloc(50 * sizeof(char));
    printf("Digite o sobrenome do funcionario: ");
    scanf("%s", sobrenome);

    char* nomeCompleto = escreverNomeForm(nome, sobrenome);


return 0;
}

char* escreverNomeForm(char* nome, char* sobrenome){
    printf("%s, %s.\n", sobrenome, nome); 
}

