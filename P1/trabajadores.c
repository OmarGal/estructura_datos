#include<stdio.h>
#include <stdlib.h>

double obtener_isr(double sueldo_bruto);

typedef struct Trabajadores{
    int num_trabajador;
    char nombre[25];
    char apellido[25];
    double salario;
    double isr;
    double sueldo;

}Trabajadores;

Trabajadores Empleados[4];

int main(){
    int opcion, empleado_index;

    printf("%.2f\n", 1000000.0);

    for(int i = 0; i < sizeof(Empleados)/sizeof(Empleados[0]); i++){
        Empleados[i].num_trabajador = i + 1;

        printf("Empleado numero %d\n", i + 1);
        printf("Nombre: ");
        scanf("%s", Empleados[i].nombre);
        printf("Apellido: ");
        scanf("%s", Empleados[i].apellido);
        printf("Salario: $");
        scanf("%lf", &Empleados[i].salario);

        Empleados[i].isr = obtener_isr(Empleados[i].salario);
        Empleados[i].sueldo = Empleados[i].salario - Empleados[i].isr;

        printf("ISR: $%g", Empleados[i].isr);
        printf("\nsueldo: $%g", Empleados[i].sueldo);
        printf("\n\n");
        system("clear");
    }

    do{
        system("clear");
        for(int i = 0; i < sizeof(Empleados)/sizeof(Empleados[0]); i++){
            printf("%d. %s %s\n", i+1, Empleados[i].nombre, Empleados[i].apellido);
        }
        printf("Escoge un empleado: ");
        scanf("%d", &empleado_index);
        empleado_index--;

        printf("\nEmpleado numero %d\n", Empleados[empleado_index].num_trabajador);
        printf("%s %s\n", Empleados[empleado_index].nombre, Empleados[empleado_index].apellido);
        printf("Salario: $%.2f\n", Empleados[empleado_index].salario);
        printf("ISR: $%.2f\n", Empleados[empleado_index].isr);
        printf("Sueldo: $%.2f\n", Empleados[empleado_index].sueldo);

        printf("\nBuscar otro empleado? (0.No 1.Si): ");
        scanf("%d", &opcion);
    }while(opcion != 0);

    return 0;
}

double obtener_isr(double sueldo_bruto){
    double porcentaje, isr;
    if(sueldo_bruto <= 8954.49){
        porcentaje = 1.92;
    }
    else if(sueldo_bruto <= 75984.55){
        porcentaje = 6.40;
    }
    else if(sueldo_bruto <= 133536.07){
        porcentaje = 10.88;
    }
    else if(sueldo_bruto <= 155229.80){
        porcentaje = 16;
    }
    else if(sueldo_bruto <= 185852.57){
        porcentaje = 17.92;
    }
    else if(sueldo_bruto <= 374837.88){
        porcentaje = 21.36;
    }
    else if(sueldo_bruto <= 590795.99){
        porcentaje = 23.52;
    }
    else if(sueldo_bruto <= 1127926.84){
        porcentaje = 30;
    }
    else if(sueldo_bruto <= 1503902.46){
        porcentaje = 32;
    }
    else if(sueldo_bruto <= 4511707.38){
        porcentaje = 34;
    }
    else{
        porcentaje = 35;
    }

    isr = (sueldo_bruto * (porcentaje/100));
    return isr;
}