#include <stdio.h>
#include <stdlib.h>
// #include <conio.h> 
// ^quita las "//"

void inicializar_cuartos();
void alquilar(numero_del_cuarto);
void pagar();

typedef struct Departamentos{
    int num_cuarto;
    int num_camas;
    int piso;
    int precio;
    int esta_ocupado; // 0 = falso, 1 = verdadero
}Departamentos;

Departamentos Cuartos[6];


int main(){
    int repetir, opcion, escoger, dias, total;

    inicializar_cuartos();

    do{
        system("clear"); // cambia el "clear" por "cls"
        printf("=== Bienvenido ===\n");
        printf("1.Alquilar\n2.Pagar\n3.Salir\n");
        printf("Escoge una opcion: ");
        scanf("%d", &repetir);

        switch (repetir)
        {
        case 1:
            system("clear"); // cambia el "clear" por "cls"
            for(int i = 0; i < 6; i++){
                if(Cuartos[i].esta_ocupado == 0){
                    printf("%d.Cuarto %d. Cuarto libre\n", i+1, Cuartos[i].num_cuarto);
                    printf("  Camas: %d\n", Cuartos[i].num_camas);
                    printf("  Piso: %d\n", Cuartos[i].piso);
                    printf("  Precio: $%d\n\n", Cuartos[i].precio);
                }
            }

            printf("Escoge una habitacion: ");
            scanf("%d", &escoger);
            escoger = escoger - 1;

            printf("\nTu habitacion es el numero %d en el piso %d.\n", Cuartos[escoger].num_cuarto, Cuartos[escoger].piso);
            Cuartos[escoger].esta_ocupado = 1;

            printf("Presiona enter para continuar...");
            scanf("%d", &escoger); // cambia por "getch();"
            break;
        case 2:
            system("clear"); // cambia el "clear" por "cls"
            for(int i = 0; i < 6; i++){
                if(Cuartos[i].esta_ocupado == 1){
                    printf("%d.Cuarto %d.\n", i+1, Cuartos[i].num_cuarto);
                    printf("  Precio: $%d\n\n", Cuartos[i].precio);

                }
            }
            printf("Selecciona la habitacion en la que te quedaste: ");
            scanf("%d", &escoger);
            escoger = escoger - 1;

            printf("Dias hospedados: ");
            scanf("%d", &dias);

            total = dias * Cuartos[escoger].precio;

            printf("Te hospedaste en la habitacion %d.\n", Cuartos[escoger].num_cuarto);
            printf("Tu total ha pagar es de: $%d\n", total);

            Cuartos[escoger].esta_ocupado = 0;

            printf("Presiona enter para continuar...");
            scanf("%d", &escoger); // cambia por "getch();"
            break;

        default:
            break;
        }

        // getch();
        // ^quita las "//"

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

void alquilar(numero_del_cuarto){
    printf("\nTu habitacion es el numero %d en el piso %d.\n", Cuartos[numero_del_cuarto].num_cuarto, Cuartos[numero_del_cuarto].piso);
    Cuartos[numero_del_cuarto].esta_ocupado = 1;
}

void pagar(){


}

