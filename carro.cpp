#include <iostream>
using namespace std;

typedef struct carro{
    string marca;
    int modelo;
    int precio;
}Autos;

int main(){
    int cantidad = 5, opcion;
    
    Autos Unidades[cantidad];

    do{
        cout << "1.Guardar\n2.Mostrar\n3.Salir\nOpcion: ";
        cin >> opcion;
        if(opcion == 1){
            for (int i = 0; i < cantidad; i++){
                cout << "\nIntroduce la marca: ";
                // getline(cin, Unidades[i].marca); // noup :[
                cin >> Unidades[i].marca;
                cout << "Introduce el modelo: ";
                cin >> Unidades[i].modelo;
                cout << "Introduce el precio: $";
                cin >> Unidades[i].precio;
            }
        }
        else{

        }
    } while (opcion >= 3);
    

    return 0;
}

/*
Menu que regrese todas las entradas de un marca especificada
    ej. ford, chevrolet, vw
mostrando marca, modelo, precio, tipo(suv,4x4,etc)
    1.Guardar
    2.Mostrar  <-----?????
*/