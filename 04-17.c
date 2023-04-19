#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void ventas_dia();
void mayor_venta_dia();
void promedio_ventas();
void llenar();

char dia[7][20] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
double promedios_por_dia[7];
double totales_por_dia[7];
double tienda[10][7];
int id_mayor_venta;

int main(){
    srand(time(NULL));
    int opcion;
    llenar(tienda);

    do{
        printf("======= Bienvenido =======\n");
        printf("1.Ventas por dia\n2.Dia con mayor venta\n3.Promedio de venta por dia\n4.Salir\n");
        printf("opcion: ");
        scanf("%d", &opcion);
        system("cls");

        switch (opcion){
        case 1:
            ventas_dia();
            break;
        
        case 2:
            mayor_venta_dia();
            break;
        
        case 3:
            promedio_ventas();
            break;
        
        case 4:
            printf("El programa ha terminado");
            return 0;
            break;
        
        default:
            break;
        }

        printf("\n\nPresiona cualquier tecla para continuar...");
        getch();
        system("cls");
    }while(opcion = 4);


    return 0;
}

void ventas_dia(){
    double venta, total;
    int mayor = 0, id;

    for (int i = 0; i < 7; i++){
        total = 0;
        system("cls");
        printf("> Ventas por dia");
        printf("\n -%s\n", dia[i]);
        for (int j = 0; j < 10; j++){
            printf("    Venta #%d: $", j+1);
            scanf("%lf", &venta);
            total += venta;
            tienda[j][i] = venta;
            totales_por_dia[i] = total;
        }
        if (total > mayor){
            mayor = total;
            id = i;
        }
        promedios_por_dia[i] = totales_por_dia[i] / 10;
    }
    id_mayor_venta = id;
}

void llenar(){
    double venta, total;
    int nMin = 10, nMax = 50;
    int mayor = 0, id;

    for(int i = 0; i < 7; i++){
        total = 0;
        for(int j = 0; j < 10; j++){
            venta = rand()%((nMax+1)-nMin) + nMin;
            total += venta;
            tienda[j][i] = venta;
            totales_por_dia[i] = total;
        }
        if(total > mayor){
            mayor = total;
            id = i;
        }
        promedios_por_dia[i] = totales_por_dia[i]/10;
    }
    id_mayor_venta = id;
}

void mayor_venta_dia(){
    system("cls");
    printf("> Dia con mayor ventas\n");
    for(int i = 0; i < 7; i++){
        printf("\n%s: $%.2f", dia[i], totales_por_dia[i]);
    }
    printf("\n\n%s fue el dia con mayor ventas $%.2f", dia[id_mayor_venta], totales_por_dia[id_mayor_venta]);
}

void promedio_ventas(){
    printf("> Promedio de ventas por dia (10 ventas)\n");
    for(int i = 0; i < 7; i++){
        printf("\n%s: $%.2f por cada venta", dia[i], promedios_por_dia[i]);
    }
}