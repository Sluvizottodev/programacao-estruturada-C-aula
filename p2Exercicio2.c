#include <stdio.h>
#include <stdlib.h>

float media (char letra, float n1, float n2, float n3){
    if(letra == 'A'){
        return (n1 + n2 + n3) / 3;
    } else if (letra == 'p'){
        return (n1 * 5 + n2 * 3 + n3 *2/ (5+3+2));
    } else if (letra == 'H'){
        return 3 / (1/n1 + 1/n2 + 1/n3);
    }else{
        return -1;
    }
}

int main(){
    char letra;
    float n1, n2, n3;
    printf("Digite a letra da média que deseja calcular: ");
    scanf("%c", &letra);
    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("A média é: %.2f", media(letra, n1, n2, n3));
    return 0;
}