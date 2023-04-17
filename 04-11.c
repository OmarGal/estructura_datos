#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct Empleado{
    char nombre[25];
    double sueldo_por_dia[6];
    double total;
}Empleado;

void guardar_empleado();
void guardar_pagos();
void mostrar_saldo();

Empleado Empleados[10];

int main(){

    int opcion;
    int sueldo_empleados;

    do{
        printf("======== Bienvenido ========");
        printf("\n1.Guardar empleado\n2.Guardar pagos\n3.Mostrar sueldo total por empleado\n4.Salir\n");
        printf("opcion: ");
        // printf("\n%d", sizeof(Empleados)/sizeof(Empleados[0]));
        scanf("%d", &opcion);
        system("cls");

        switch (opcion){
        case 1:
            printf("> Guardar empleado");
            printf("\nNumero de empleados: %d\n", sizeof(Empleados) / sizeof(Empleados[0]));
            guardar_empleado();
            break;

        case 2:
            printf("> Guardar pagos");
            guardar_pagos();
            break;

        case 3:
            printf("> Mostrar saldo");
            mostrar_saldo();
            break;
        case 4:
            printf("El programa ha terminado");
            return 0;
        default:
        }

        printf("\nPresiona cualquier tecla para continuar...");
        getch();
        system("cls");
    }while(opcion != 4);

    return 0;
}

void guardar_empleado(){
    int id;

    printf("Ingresa el numero de empleado: ");
    scanf("%d", &id);
    id--;
    printf("Ingresa el nombre del empleado: ");
    scanf("%s", Empleados[id].nombre);

}
void guardar_pagos(){
    int id;
    double suma = 0;
    char dias[6][20] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
    for (int i = 0; i < sizeof(Empleados) / sizeof(Empleados[0]); i++){
        printf("\n%d.%s", i+1, Empleados[i].nombre);
    }
    printf("\nSelecciona un empleado: ");
    scanf("%d", &id);
    system("cls");
    printf("> Empleado #%d", id);
    id--;
    printf("\n%s", Empleados[id].nombre);
    printf("\nIngresa el pago por dia.\n");
    for (int i = 0; i < 6; i++){
        printf("- %s: $", dias[i]);
        scanf("%lf", &Empleados[id].sueldo_por_dia[i]);
        Empleados[id].total += Empleados[id].sueldo_por_dia[i];
    }
}

void mostrar_saldo(){
    char dias[6][20] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
    int id;
    for (int i = 0; i < sizeof(Empleados) / sizeof(Empleados[0]); i++){
        printf("\n%d.%s", i + 1, Empleados[i].nombre);
    }
    printf("\nSelecciona un empleado: ");
    scanf("%d", &id);
    system("cls");
    printf("> Empleado #%d", id);
    id--;
    printf("\n%s", Empleados[id].nombre);
    for(int i = 0; i < 6; i++){
        printf("\n- %s: \t$%.2f", dias[i], Empleados[id].sueldo_por_dia[i]);
    }
    printf("\nTotal: \t$%.2f\n", Empleados[id].total);
}
