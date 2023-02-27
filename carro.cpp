#include <iostream>
using namespace std;

typedef struct carro{
    string marca;
    int modelo;
    int precio;
}Autos;

int main(){
    int cantidad = 5;
    Autos Unidades[cantidad];

    // Dentro de menu opcion "Guardar"
    for (int i = 0; i < cantidad; i++){
        cout << "Introduce la marca: ";
        getline(cin, Unidades[i].marca);
        cout << "Introduce el modelo: ";
        cin >> Unidades[i].modelo;
        cout << "Introduce el precio: $";
        cin >> Unidades[i].precio;
        cout << endl;
    }
    // Dentro de menu opcion "Guardar"

    return 0;
}

/*
Menu que regrese todas las entradas de un marca especificada
    ej. ford, chevrolet, vw
mostrando marca, modelo, precio, tipo(suv,4x4,etc)
    1.Guardar
    2.Mostrar  <-----?????
*/