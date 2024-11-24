#include <stdlib.h>
#include <stdio.h>

float grausParaRadianos(float graus);

int main()
{
    float graus;
    scanf("%f", &graus);
    float radianos = grausParaRadianos(graus);
    printf("%.2f graus equivalem a %.2f radianos.\n", graus, radianos);
    return 0;
}

float grausParaRadianos(float graus){
    const float pi = 3.141592;
    float radianos = graus * pi / 180;
    return radianos;
}
