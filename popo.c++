#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void cargar_mercancia();
void salida_mercancia();
void consulta_mercancia();
int convertir(int valor);

typedef struct Alimento
{
    char nombre[25];
    char unidad_str[6];
    int conversion;
    double kilos;
    double unidad;
} Alimento;

Alimento Alimentos[2];

char nombre[2][25] = {"azucar", "huevo"};

int main()
{
    Alimentos[0].conversion = 500;
    Alimentos[1].conversion = 200;
    int menu;

    do
    {
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

        printf("\nenter para continuar");
        getch();
    } while (menu != 4);

    return 0;
}

void cargar_mercancia()
{
    int opcion;
    double cantidad;
    printf("1.Carga azucar\n2.Carga huevo\n");
    printf("opcion: ");
    scanf("%d", &opcion);
    opcion--;

    printf("Introduzca kilos: ");
    scanf("%lf", &cantidad);

    Alimentos[opcion].kilos += cantidad;
    Alimentos[opcion].unidad = (Alimentos[opcion].kilos / 1000) * Alimentos[opcion].conversion;
}
void salida_mercancia()
{
    int opcion;
    double cantidad;
    printf("1.Salida azucar\n2.Salida huevo\n");
    printf("opcion: ");
    scanf("%d", &opcion);
    opcion--;

    printf("Salida de kilos: ");
    scanf("%lf", &cantidad);

    Alimentos[opcion].kilos -= cantidad;
    Alimentos[opcion].unidad = (Alimentos[opcion].kilos / 1000) * Alimentos[opcion].conversion;
}
void consulta_mercancia()
{
    int opcion;

    printf("1.Consulta azucar\n2.Consulta huevo\n");
    printf("opcion: ");
    scanf("%d", &opcion);
    opcion--;

    printf("%s\n", nombre[opcion]);
    printf("kilos: %lf\n", Alimentos[opcion].kilos);
    printf("bultos/cajas: %lf\n", Alimentos[opcion].unidad);
}
int convertir(int valor)
{
    Alimentos[valor].unidad = (Alimentos[valor].kilos / 1000) * Alimentos[valor].conversion;
}