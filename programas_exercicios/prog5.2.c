#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float potencia(float x, int exp);

int main(){
int exp;
float x;

printf ("Digite o número base: ");
scanf ("%f", &x);

printf("Digite o expoente: ");
scanf ("%d", &exp);

//Chama Potencia
float res = potencia(x ,exp);
printf("%.2f", res);

return 0;
}

///Método para potência
float potencia (float x, int exp){
    float r;
    r= pow( x , exp);

    return r;
}