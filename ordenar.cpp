// leer seis nemusreo ordenar de menor a myour
#include<iostream>
using namespace std;

bool estan_ordenados(int numeros[6]){
    for(int i = 0; i < 6; i++){
        if(numeros[i] > numeros[i+1]){
            cout << "no esta ordenado" << endl;
            return false;
            break;
        }
        else{
            cout << "esta ordenado" << endl;
            return true;
        }
    }
    return true;
}


int main(){
    // int numeros[6], menor, mayor;
    int menor, mayor;

    cout << "====== Bienvenido ======\n" << endl;

    // for(int i = 0; i < sizeof(numeros)/4; i++){
    //     cout << "Ingresa un numero: ";
    //     cin >> numeros[i];
    // }

    int numeros[6]={1,2,3,4,5,6};
    // int numeros[6]={2,1,3,4,5,6};
    bool x = estan_ordenados(numeros);
    cout << "bool: " << x << endl;

    for(int i = 0; i < sizeof(numeros)/4; i++){
        cout << numeros[i] << endl;
    }


    // cout << endl;
    // for(int i = 0; i < sizeof(numeros)/4; i++){
    //     cout << numeros[i] << endl;
    // }

    return 0;
}



// programa que guarde el nombre sexo y sueldo de un empleado
// de 10 trabajadores
// el resultado tiene que regresar el sueldo mayor