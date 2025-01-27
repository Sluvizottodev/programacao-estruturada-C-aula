#include <stdlib.h>
#include <stdio.h>

int piso(float x);
int teto(float x);

main(){

float x;
printf ("Digite um número com casas decimais: ");
scanf("%f", &x);

int rPiso = piso(x); //Chama Piso com 'x';

int rTeto = teto(x); //Chama Teto com 'x';
printf("O piso é: %d\n", rPiso);
printf("O Teto é: %d\n", rTeto);

return 0;
}

///Método piso
int piso (float x){
    int y = (int)x;
    return y;
}

///Método teto
int teto (float x){
    int y;
    if(x == (int)x){
        y = (int)x;
    }else{
        x++;
        y =(int)x;
    }
    return y;
}