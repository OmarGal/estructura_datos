#include <iostream>
using namespace std;

typedef struct carro{
    string marca;
    string tipo;
    int modelo;
    int precio;
}Autos;

int main(){
    string x;
    int cantidad = 5, opcion, buscar_modelo;
    Autos Unidades[cantidad];

    do{
        system("clear");
        cout << "1.Guardar\n2.Mostrar\n3.Salir\nOpcion: ";
        cin >> opcion;
        cout << endl;
        if(opcion == 1){
            for (int i = 0; i < cantidad; i++){
                cout << "Introduce la marca: ";
                cin >> Unidades[i].marca;
                cout << "Introduce el tipo: ";
                cin >> Unidades[i].tipo;
                cout << "Introduce el modelo: ";
                cin >> Unidades[i].modelo;
                cout << "Introduce el precio: $";
                cin >> Unidades[i].precio;
                cout << endl;
            }
        }
        else if(opcion == 3){
            cout << "Finalizado." << endl;
            break;
        }
        else{
            for(int i = 0; i < cantidad; i++){
                cout << i+1 << "." << Unidades[i].marca << endl;
            }
            cout << "Selecciona modelo: ";
            cin >> buscar_modelo;
            buscar_modelo = buscar_modelo - 1;
            cout << "\n" << Unidades[buscar_modelo].marca << Unidades[buscar_modelo].tipo << ", " << Unidades[buscar_modelo].modelo << ". $" << Unidades[buscar_modelo].precio << endl;
            cout << "Presiona una tecla para continuar...";
            cin >> x;
        }
    } while (opcion != 3);
    

    return 0;
}

/*
Menu que regrese todas las entradas de un marca especificada
    ej. ford, chevrolet, vw
mostrando marca, modelo, precio, tipo(suv,4x4,etc)
    1.Guardar
    2.Mostrar  <-----?????
*/