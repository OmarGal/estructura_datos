#include <iostream>
#include <cmath>
using namespace std;

double prestamo(double cantidad);
double pago();
double sueldo();

int main(){

    double prestamo, saldo;
    int opcion;

    while(opcion != 4){
        cout << "============= Financiera UO =============" << endl;
        cout << "1.Prestamo\n2.Pago\n3.Sueldo\n4.Salir\nOpcion: ";
        cin >> opcion;

        switch (opcion){
        case 1:
            break;
        
        case 2:
            break;
        
        case 3:
            break;
            
        }

    }



    return 0;
}

double prestamo(double cantidad){
    int interes;
    int entero = floor(cantidad);
    switch (entero){
        case 0 ... 4999:
            break;
        
        case 5000 ... 9999:
            interes = 15;
            break;
        
        case 10000 ... 20000:
            interes = 13;
            break;

        default:
            interes = 10;
            break;
    }
    
    
}
double pago(){

}
double sueldo(){

}