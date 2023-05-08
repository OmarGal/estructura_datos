#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void cargar_mercancia();
void salida_mercancia();
void consulta_mercancia();
int convertir(int valor);

typedef struct Alimento{
    char nombre[25];
    char unidad_str[6];
    int conversion;
    double kilos;
    double unidad;
}Alimento;

Alimento Alimentos[2];

int azucar_id=0, huevos_id=1;
char nombre[2][25] = {"Azucar", "Harina"};
char unidad_str[2][6] = {"bultos", "cajas"};

int main(){
    Alimentos[0].conversion = 500;
    Alimentos[1].conversion = 200;
    int menu;

    do{
        system("cls");
        printf("1.Carga de mercancia\n2.Salida de mercancia\n3.Consulta existencias\n4.Salir\n");
        printf("Opcion: ");
        scanf("%d", &menu);
        system("cls");

        switch (menu)
        {
        case 1:
            cargar_mercancia();
            break;
        
        case 2:
            salida_mercancia();
            break;
        
        case 3:
            consulta_mercancia();
            break;
        
        case 4:
            return 0;
        
        default:
            break;
        }

        printf("enter para continuar");
        getch();
    }while(menu != 4);
    
    return 0;
}

void cargar_mercancia(){
    int opcion;
    printf("1.Carga azucar\n2.Carga harina\n");
    printf("opcion: ");
    scanf("%d", &opcion);
    opcion--;

    printf("Introduzca kilos: ");
    scanf("%lf", &Alimentos[opcion].kilos);

    

    printf("\nlksjdf: %lf", Alimentos[opcion].kilos);
}
void salida_mercancia(){


}
void consulta_mercancia(){


}
int convertir(int valor){
    Alimentos[valor].unidad = Alimentos[valor].kilos / Alimentos[valor].conversion;
    return 0;
}