#include <stdio.h>

typedef struct trabajo{
    char nombre[20];
    char apellido_paterno[20];
    char apellido_materno[20];
    double sueldo;
    char sucursal[20];
    char departamento[20];

}Trabajadores;

Trabajadores Empleados[4];

int main(){
    int opcion, nuevo_empleado = 0, submenu;
    int n_Empleados = sizeof(Empleados)/sizeof(Empleados[0]);
    int n_sucursales;
    char sucursales[3][20] = {"Veracruz", "Orizaba", "Puebla"};
    n_sucursales = sizeof(sucursales)/sizeof(sucursales[0]);
    char departamentos[4][20] = {"Ventas", "Contabilidad", "Compras", "Gerencia"};

    //test
    Empleados[0] = (struct trabajo){"a","b","c","c","Veracruz"};
    //test
    
    do{
        printf("1.Capturar empleado\n2.Consultar empleado por sucursal\n3.Consultar empleado por departamento\n4.Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);
        printf("\n");

        switch (opcion){
        case 1:
            printf("Ingresa el nombre: ");
            scanf("%s", Empleados[nuevo_empleado].nombre);
            printf("Ingresa el apellido paterno: ");
            scanf("%s", Empleados[nuevo_empleado].apellido_paterno);
            printf("Ingresa el apellido materno: ");
            scanf("%s", Empleados[nuevo_empleado].apellido_materno);
            printf("Ingresa el departamento: ");
            scanf("%s", Empleados[nuevo_empleado].departamento);
            printf("Ingresa el sucursal: ");
            scanf("%s", Empleados[nuevo_empleado].sucursal);

            nuevo_empleado++;
            break;
        case 2:
            printf("Escoge una sucursal para consultar empleados\n");
            for(int i = 0; i<n_sucursales; i++){
                printf("%d. %s\n", i+1, sucursales[i]);
            }
            printf("Sucursal: ");
            scanf("%d", &submenu);

            for(int i = 0; i<n_Empleados; i++){
                printf("\nCiclo %d", i);
                printf("\n    %s, %s", Empleados[i].sucursal,sucursales[submenu]);

                if(Empleados[i].sucursal == sucursales[submenu]){
                    printf("%s %s %s", Empleados[i].nombre, Empleados[i].apellido_paterno, Empleados[i].apellido_materno);
                }
                else{
                    printf("\n  no es igual");
                }
            }

            break;
        case 3:
        
            break;
        case 4:
            printf("El programa ha terminado.");
            break;
        default:
            break;
        }


        printf("\n");
    }while(opcion != 4);
    // printf("%")

    return 0;
}

/*
1.capturar empleado
2.consultar por sucursal
3.consultar por departamento
4.salir

*/