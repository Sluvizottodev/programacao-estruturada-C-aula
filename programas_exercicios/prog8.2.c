#include <stdio.h>
#include <stdlib.h>

typedef enum {
    rua,
    avenida,
    largo,
    jardim,
    estrada,
}tipoLog;

typedef struct {
    char* log , *complement , *bairro , *cidade , *estado , *cep ;
    int numero;
    tipoLog tipo;
}endereco;

char* tipoPTexto (tipoLog tipo){

    switch (tipo){
        case rua:
            return "rua";
            break;

        case avenida:
            return "avenida";
            break;

        case largo:
            return "largo";
            break;

        case jardim:
            return "jardim";
            break;

        case estrada:
            return "estrada";
            break;
    }
}

int main(){
   endereco E;
    E.tipo = largo;
    E.log = "Marcos";
    E.numero = 2;
    E.complement = "Esquina1";
    E.bairro = "Centro";
    E.cidade = "Nova Friburgo";
    E.estado = "RJ";
    E.cep = "23245-234";

    printf ("%s %s %d %s %s %s %s %s", tipoPTexto(E.tipo), E.log, E.numero, E.complement, E.bairro, E.cidade, E.estado, E.cep);
}