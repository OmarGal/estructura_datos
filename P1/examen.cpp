#include <iostream>
using namespace std;


int main (){
    double total = 0, total_precio = 0;
    int opcion = 0, boletos_enteros, boletos_medios;
    string destinos[4] = {"Cordoba", "Orizaba", "Xalapa", "Mexico"};
    int precios[4] = {120, 150, 180, 600};
    int total_boletos[4] = {0,0,0,0};


    cout << "========= Sistema de viajes =========" << endl;
    
    while(opcion < 6){
        cout << "\n1.Cordoba - $120\n2.Orizaba - $150\n3.Xalapa - $180\n4.Mexico - $600\n5.Venta total\n6.Salir" << endl;
        cout << "\nOpcion: ";
        cin >> opcion;


        if(opcion <= 4){
            cout << "\nCantidad de boletos enteros: ";
            cin >> boletos_enteros;
            cout << "Cantidad de boletos medios: ";
            cin >> boletos_medios;
            total_boletos[opcion-1] = boletos_enteros + boletos_medios;
            total = (boletos_enteros*precios[opcion-1]) + (boletos_medios*precios[opcion-1])/2;
            cout << "Total: $" << total << endl;
        }
        else if(opcion == 5){
            for(int i = 0; i < 4; i++){
                cout << "Pasajeros a " << destinos[i] << ": " << total_boletos[i] << endl;
            }
            cout << "\nEl total es de: $" << total_precio << endl;
        } 
        total_precio = total_precio + total;
    }

    return 0;
}

