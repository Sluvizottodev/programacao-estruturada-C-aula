#include <stdio.h>
#include <stdlib.h>

int main() {

    //declaração de vetor
    int vetor[5] = {1, 2, 3, 4, 5};
    int i;

    printf("%d %d %d %d %d\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);
    //pra acessar vetor, usa-se o indíce q é = tamanho - 1;

    for(i=0; i<5;i++){
        printf("Insira o elemento da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<5;i++){
        printf("%d\n", vetor[i]);
    }



}