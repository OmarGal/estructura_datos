#include <stdio.h>

int main(){

    int calif[5][2];
    int num = 1;
    int  opcion;
    int calificacion_mayor;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            calif[j][i] = num;   
            printf("\nValor (%d, %d) es = %d", j, i, calif[j][i]);
            num ++;
        }
    }

    printf("\n\n0.Varones\n1.Mujeres\n");
    printf("escoge: ");
    scanf("%d", &opcion);

    if (opcion == 0){
        printf("\nCalificacion de varones\n");
    }else{
        printf("\nCalificacion de mujeres\n");
    }
    for (int i = 0; i < 5; i++){
        printf("\nCalificacion %d: %d", i+1, calif[i][0]);
    }        
    
    int promedio_v, promedio_m;
    for (int i = 0; i < 5; i++){
        promedio_v = calif[i][0] + promedio_v;
    }        
    promedio_v = promedio_v/5;

    for (int i = 0; i < 5; i++){
        promedio_m = calif[i][1] + promedio_m;
    }        
    promedio_m = promedio_m/5;

    printf("\n\nEl promedio de varones es: %d", promedio_v);
    printf("\nEl promedio de mujeres es: %d", promedio_m);

    if(promedio_m > promedio_v){
        printf("\nEl promedio de mujeres es mayor");
    }else{
        printf("\nEl promedio de varones es mayor");
    }


    // num = 1;
    // printf("\n");

    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; j < 2; j++){
    //         calif[i][j] = num;   
    //         printf("\nValor (%d, %d) es = %d", i, j, calif[i][j]);
    //         num ++;
    //     }
    // }

}