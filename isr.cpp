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

    sueldo_neto = sueldo_bruto - (sueldo_bruto * (porcentaje/100));

    cout << "\nSueldo neto despues de un impuesto del " << porcentaje << "% es de: $" << fixed << std::setprecision(2) << sueldo_neto << endl;
    cout << scientific;

    return 0;
}