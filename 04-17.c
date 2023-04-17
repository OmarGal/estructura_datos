#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include <conio.h>

float ventas_dia(float lista[10][7]);
float mayor_venta_dia(float lista[10][7]);
void promedio_ventas(float lista[7]);
float llenar(float lista[10][7]);
char dia[5][20] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes"};

int main(){
    srand(time(NULL));
    int opcion;
    float tienda[10][7], totales_por_dia[7];
    llenar(tienda);

    do{
        printf("======= Bienvenido =======\n");
        printf("1.Ventas por día\n2.Dia con mayor venta\n3.Promedio de venta por dia\n4.Salir\n");
        printf("opcion: ");
        scanf("%d", &opcion);
        system("clear");

        switch (opcion){
        case 1:
            tienda[10][7] = ventas_dia(tienda);
            break;
        
        case 2:
            totales_por_dia[7] = mayor_venta_dia(tienda);
            break;
        
        case 3:
            promedio_ventas(totales_por_dia);
            break;
        
        case 4:
            break;
        
        default:
            break;
        }

    }while(opcion = 4);



}

float ventas_dia(float lista[10][7]){
    float venta, total = 0;

    printf("> Ventas por dia\n");
    for(int i = 0; i < 7; i++){
        printf("   - %s\n", dia[i]);
        for(int j = 0; j < 10; j++){
            printf("   Venta #%d: $", j+1);
            scanf("%f", &lista[j][i]);

        }
    }
    return lista[10][7];
}

float llenar(float lista[10][7]){
    float venta, total = 0;
    int nMin = 10, nMax = 50;
    int nRandonNumber;
    

    for(int i = 0; i < 7; i++){
        // printf("   - %s\n", dia[i]);
        for(int j = 0; j < 10; j++){
            // printf("   Venta #%d: $", j+1);
            lista[j][i] = rand()%((nMax+1)-nMin) + nMin;
        }
    }
    return lista[10][7];
}

float mayor_venta_dia(float lista[10][7]){
    int id = 0;
    float totales[7];
    printf("> Dia con mayor venta\n");
    for(int i = 0; i < 7; i++){
        id = 0;
        // printf("\n   - %s: $", dia[i]);
        for(int j = 0; j < 10; j++){
            totales[i] += lista[j][i];
            if(totales[i] > id){
                id = totales[i];
            }
        }
    }
    printf("%s fue el dia con mayor ventas: $%f", dia[id], totales[id]);
    return totales[7];
}
void promedio_ventas(float lista[7]){
    printf("> Promedio ventas por dia\n");
    for(int i = 0; i < 7; i++){
        printf("\n   -%s: $%f", dia[i], lista[i]/10);
    }

}