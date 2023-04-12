#include <stdio.h>

typedef struct Empleado{
    int id;
    char nombre[25];
    double sueldo;
}Empleado;

void guardar_empleados();

Empleado Empleados[10];

int main(){

    int opcion;
    int sueldo_empleados;

    do{
        printf("======== Bienvenido ========");
        printf("\n1.Guardar empleado\n2.Guardar pagos\n3.Mostrar sueldo total por empleado\n4.Salir\n");
        printf("opcion: ");
        printf("\n%d", sizeof(Empleados)/sizeof(Empleados[0]));
        scanf("%d", &opcion);

        switch (opcion){
        case 1:
            printf("\n");
            break;

        case 2:
            break;

        case 3:
            break;
        
        default:
            break;
        }


    }while(opcion != 4);



    return 0;
}

void guardar_empleados(){
    for (int i = 0; i < sizeof(Empleados) / sizeof(Empleados[0]); i++){
        printf("Escribe el numero de empleado: ");
        scanf("%d", Empleados[i].id);
        printf("Escribe el nombre del empleado: ");
        scanf("%d", Empleados[i].nombre);

    }



}