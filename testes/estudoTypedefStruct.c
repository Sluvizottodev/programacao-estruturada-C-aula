#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int idade;
    char sexo;
    char nome[50];

}pessoa;

/*struct pessoa2{
    int idade;
    char sexo;
    char nome[50];
};*/

int main(){
    pessoa p1;//nome para a variável pessoa
    //struct pessoa2 p2;//nome para a struct pessoa2

    p1.idade = 20;
    p1.sexo = 'H';
    strcpy(p1.nome, "João");
    
    return 0;
}
