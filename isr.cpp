#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    double salario, porcentaje, sueldo_bruto, sueldo_neto;
    int dias_trabajados;

    cout << "============ Bienvenido ============" << endl;
    cout << "Ingresa tu salario: $";
    cin >> salario;
    cout << "Ingresa dias trabajados: ";
    cin >> dias_trabajados;

    sueldo_bruto = salario * dias_trabajados;

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

    switch((int)(sueldo_bruto*100)){
        case 895449:
            porcentaje = 1.92;
        
        case 7598455:
            porcentaje = 6.40;
        
        case 13353607:
            porcentaje = 10.88;
        
        case 15522980:
            porcentaje = 16;
        
        case 18585257:
            porcentaje = 17.92;
        
        case 37483788:
            porcentaje = 21.36;
        
        case 59079599:
            porcentaje = 23.52;
        
        case 112792684:
            porcentaje = 30;
        
        case 150390246:
            porcentaje = 32;
        
        case 451170738:
            porcentaje = 34;
        
        default:
            porcentaje = 35;
    }



    sueldo_neto = sueldo_bruto - (sueldo_bruto * (porcentaje/100));

    cout << "\nSueldo neto despues de un impuesto del " << porcentaje << "% es de: $" << fixed << std::setprecision(2) << sueldo_neto << endl;
    cout << scientific;

    return 0;
}