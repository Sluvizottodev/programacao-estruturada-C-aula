#include <stdlib.h>
#include <stdio.h>
#include <math.h>
///Chamar os métodos
float areaTriangulo( float a, float b, float angulo);
float grausParaRadianos(float graus);

///Função Main/Principal
int main()
{
    float a, b, graus;
    printf("Digite a medida de um lado: ");
    scanf("%f", &a);

    printf("Digite a medida de outro lado: ");
    scanf("%f", &b);

    printf("Digite o ângulo entre os dois lados: ");
    scanf("%f", &graus);

    float area = areaTriangulo(a, b, graus);
    printf("A área do triângulo é %.2f\n", area);

    return 0;
}

float areaTriangulo( float a, float b, float graus){
    float area = (a * b * sin(grausParaRadianos(graus)))/2;//sin é uma função da biblioteca math.h
    return area;
}

 float grausParaRadianos(float graus){
    const float pi = 3.141592;
    float radianos = graus * pi / 180;
    return radianos;
}