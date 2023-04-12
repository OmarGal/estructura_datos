#include<iostream>
using namespace std;

int main(){
    bool ordenados = false;
    int cantidad_numeros = 6;
    float numeros[cantidad_numeros], menor, mayor, suma=0, promedio;

    cout << "====== Bienvenido ======\n" << endl;

    for(int i = 0; i < cantidad_numeros; i++){
        cout << "Ingresa un numero: ";
        cin >> numeros[i];
        suma = suma + numeros[i];
    }

    promedio = suma/(cantidad_numeros);

    while(ordenados == false){
        for(int i = 0; i < cantidad_numeros-1; i++){
            if(numeros[i] > numeros[i+1]){
                mayor = numeros[i];
                menor = numeros[i+1];
                numeros[i] = menor;
                numeros[i+1] = mayor;
                ordenados = false;
                break;
            }
        ordenados = true;
        }
    }

    cout << "\nEl numero mayor es: " << numeros[cantidad_numeros-1] << endl;
    cout << "La suma de los numeros es: " << suma << endl;
    cout << "El promedio de los numeros es: " << promedio << endl;

    cout << endl;
    for(int i = 0; i < cantidad_numeros; i++){
        cout << numeros[i] << endl;
    }

    return 0;
}
