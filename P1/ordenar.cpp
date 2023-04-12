// leer seis nemusreo ordenar de menor a myour
#include<iostream>
using namespace std;

bool estan_ordenados(int lista[6]){
    for(int i = 0; i < 6-1; i++){
        if(lista[i] > lista[i+1]){
            int menor, mayor;
            mayor = lista[i];
            menor = lista[i+1];
            lista[i] = menor;
            lista[i+1] = mayor;
            return false;
        }
    }
    return true;
}


int main(){
    int numeros[6], menor, mayor;
    bool orenados;

    cout << "====== Bienvenido ======\n" << endl;


    for(int i = 0; i < sizeof(numeros)/4; i++){
        cout << "Ingresa un numero: ";
        cin >> numeros[i];
    }

    while(estan_ordenados(numeros) == false){

        // cout << "ordenando" << endl;

    }

    cout << "\nEl numero mayor es: " << numeros[5] << "\n" << endl;
    for(int i = 0; i < sizeof(numeros)/4; i++){
        cout << numeros[i] << endl;
    }



    return 0;
}
