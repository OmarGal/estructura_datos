#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

struct Persona{
    int numero;
    char nombre[25];
    char tipo[25];
}Personas[100];

void guardar_persona();
void buscar_persona();

int ultimo_numero_empleado = 0;
char tipos_de_personas[3][25] = {"Cliente", "Proveedor", "Empleado"};

int main(){
    int menu;


    do{
        system("cls");
        printf("%d", sizeof(Personas) / sizeof(Personas[0]));
        printf("============== Bienvenido ==============\n");
        printf("1.Guardar usuario\n2.Consultar clientes\n3.Consultar proveedores\n4.Consultar empleados\n5.Salir\n");
        printf("opcion: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            guardar_persona();
            break;
        
        default:
            break;
        }

        getch();
    }while(menu != 5);


    return 0;
}

void guardar_persona(){
    int index_tipo;

    printf("> Guardar usuario\n");
    printf("Ingresa el nombre: ");
    scanf("%s", Personas[ultimo_numero_empleado]);

    for(int i = 0; i<sizeof(tipos_de_personas)/sizeof(tipos_de_personas[0]); i++){
        printf("%s\n", tipos_de_personas[i]);
    }

    ultimo_numero_empleado++;
}

void buscar_persona(){

}