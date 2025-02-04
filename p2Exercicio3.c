#include <stdio.h>
#include <stdlib.h>

void separaN(float n, int *inteiro, float *decimal) {
    *inteiro = (int)n;
    *decimal = n - *inteiro;
}

int main() {
    float n;
    printf("Digite um número: ");
    scanf("%f", &n);

    int inteiro;
    float decimal;

    separaN(n, &inteiro, &decimal);

    printf("Parte inteira: %d\n", inteiro);
    printf("Parte fracionária: %.2f\n", decimal);

    return 0;
}
