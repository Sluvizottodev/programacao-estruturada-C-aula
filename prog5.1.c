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

return 0;
}

///Método piso
int piso (float x){
    int y = (int)x;
    printf("%d\n", y);
    return 0;
}

///Método teto
int teto (float x){
    int y;
    if(x == (int)x){
        y = (int)x;
        printf("%d\n", y);
    }else{
        x++;
        y =(int)x;
        printf("%d\n", y);
    }
    return y;
}