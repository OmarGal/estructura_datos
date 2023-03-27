#include <stdio.h>

inicializar_cuartos();

typedef struct Departamentos
{
    int num_cuarto;
    int num_camas;
    int piso;
    int precio;
}Departamentos;

Departamentos Cuartos[6];


int main(){

    return 0;
}

inicializar_cuartos(){
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

    Cuartos[2].num_cuarto = 201;
    Cuartos[2].num_camas = 3;
    Cuartos[2].piso = 2;
    Cuartos[2].precio = 800;


}