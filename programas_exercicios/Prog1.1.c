#include <stdio.h>
#include <stdlib.h>

//Chamando o Modulo
char lerCaractere();


int main(){ //Main sempre será int, padrão da linguagem C
    char recebido = lerCaractere(); //recebendo lerCaractere
    printf("Voc� digitou: %c\n", recebido); //Imprimindo o caractere recebido

    return 0;
}

char lerCaractere(){
    char carac;

    printf("Escreva um caractere: ");
    scanf(" %c", &carac);//Recebendo o caractere

    return carac;
}
