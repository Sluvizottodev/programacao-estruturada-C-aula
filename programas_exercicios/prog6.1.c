#include <stdio.h>
#include <stdlib.h>
#define Q 5

void trocaPorIndice(int vetor[], int tamanho){
    for(int i = 0; i< tamanho / 2 ; i++){
        int temp = vetor [i];
        vetor[i] = vetor[tamanho-1-i]; 
        vetor[tamanho-1-i] = temp;
    }
}

void trocaPorPonteiro(int *vetor, int tamanho){
    int *inicio = vetor;
    int *fim = vetor + tamanho - 1;
    
    while (inicio < fim){
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        
        inicio++;
        fim--;
    }
    
}

int main (){
    int v[Q] = {1,2,3,4,5};
    
    printf("Vetor original: \n");
    //vetor original
    for (int i = 0; i < Q; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    trocaPorIndice(v, Q);
    printf("Vetor invertido por índice: \n");
    for (int i = 0; i < Q; i++){
        printf("%d ", v[i]);
    }  
    printf ("\n");
    

    trocaPorPonteiro (v, Q);
    printf("Vetor invertido por Ponteiro: \n");
    for (int i = 0; i < Q; i++){
            printf ("%d ", v[i]);    
    }
    printf("\n");

    return 0;
}