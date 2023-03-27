#include <stdio.h>

void inicializar_cuartos();
void alquilar();
void pagar();

typedef struct Departamentos{
    int num_cuarto;
    int num_camas;
    int piso;
    int precio;
    int esta_ocupado;
}Departamentos;

Departamentos Cuartos[6];


int main(){
    int repetir, opcion;

    inicializar_cuartos();

    do{
        printf("=== Bienvenido ===\n");
        printf("1.Alquilar\n2.Pagar\n3.Salir\n");
        printf("Escoge una opcion: ");
        scanf("%d", opcion);

        switch (opcion)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        
        default:
            break;
        }

    }while(repetir != 3);


    return 0;
}

void inicializar_cuartos(){

    Cuartos[0].num_cuarto = 101;
    Cuartos[0].num_camas = 2;
    Cuartos[0].piso = 1;
    Cuartos[0].precio = 600;
    Cuartos[0].esta_ocupado = 0;

    Cuartos[1].num_cuarto = 102;
    Cuartos[1].num_camas = 2;
    Cuartos[1].piso = 1;
    Cuartos[1].precio = 600;
    Cuartos[1].esta_ocupado = 0;

    Cuartos[2].num_cuarto = 201;
    Cuartos[2].num_camas = 3;
    Cuartos[2].piso = 2;
    Cuartos[2].precio = 800;
    Cuartos[2].esta_ocupado = 0;

    Cuartos[3].num_cuarto = 301;
    Cuartos[3].num_camas = 2;
    Cuartos[3].piso = 3;
    Cuartos[3].precio = 600;
    Cuartos[3].esta_ocupado = 0;

    Cuartos[4].num_cuarto = 401;
    Cuartos[4].num_camas = 3;
    Cuartos[4].piso = 4;
    Cuartos[4].precio = 800;
    Cuartos[4].esta_ocupado = 0;

    Cuartos[5].num_cuarto = 402;
    Cuartos[5].num_camas = 3;
    Cuartos[5].piso = 4;
    Cuartos[5].precio = 800;
    Cuartos[5].esta_ocupado = 0;


}

void alquilar(){

}

void pagar(){


}

