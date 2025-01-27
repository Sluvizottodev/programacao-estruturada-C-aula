#include <stdio.h>
#include <stdlib.h>

//Uso de Ponteiros


void pontoMedio(int xi, int yi, int xf, int yf, float *xm, float *ym);

int main() {
    int xi, yi, xf, yf;
    float xm, ym;

    // Solicita ao usuário os pontos inicial e final
    printf("Digite as coordenadas do ponto inicial (xi, yi): ");
    scanf("%d %d", &xi, &yi);

    printf("Digite as coordenadas do ponto final (xf, yf): ");
    scanf("%d %d", &xf, &yf);

    // Chama a função que calcula o ponto médio
    pontoMedio(xi, yi, xf, yf, &xm, &ym);

    // Exibe o ponto médio
    printf("O ponto médio é: (%.2f, %.2f)\n", xm, ym);

    return 0;
}

// Função que calcula o ponto médio de um segmento de reta
void pontoMedio(int xi, int yi, int xf, int yf, float *xm, float *ym) {
    *xm = (xi + xf) / 2.0;  // Calcula a abscissa do ponto médio
    *ym = (yi + yf) / 2.0;  // Calcula a ordenada do ponto médio
}
