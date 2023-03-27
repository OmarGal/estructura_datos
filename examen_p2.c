#include <stdio.h>

void inicializar_cuartos();

typedef struct Departamentos
{
    int num_cuarto;
    int num_camas;
    int piso;
    int precio;
}Departamentos;

Departamentos Cuartos[6];


int main(){
    inicializar_cuartos();

    for(int i = 0; i < sizeof(Cuartos)/sizeof(Cuartos[0]); i++){
        printf("\n%d", Cuartos[i].num_cuarto);
    }


    return 0;
}

void inicializar_cuartos(){
    Cuartos[0].num_cuarto = 101;
    Cuartos[0].num_camas = 2;
    Cuartos[0].piso = 1;
    Cuartos[0].precio = 600;

    Cuartos[1].num_cuarto = 102;
    Cuartos[1].num_camas = 2;
    Cuartos[1].piso = 1;
    Cuartos[1].precio = 600;

    Cuartos[2].num_cuarto = 201;
    Cuartos[2].num_camas = 3;
    Cuartos[2].piso = 2;
    Cuartos[2].precio = 800;

    Cuartos[3].num_cuarto = 301;
    Cuartos[3].num_camas = 2;
    Cuartos[3].piso = 3;
    Cuartos[3].precio = 600;

    Cuartos[4].num_cuarto = 401;
    Cuartos[4].num_camas = 3;
    Cuartos[4].piso = 4;
    Cuartos[4].precio = 800;

    Cuartos[5].num_cuarto = 402;
    Cuartos[5].num_camas = 3;
    Cuartos[5].piso = 4;
    Cuartos[5].precio = 800;


}