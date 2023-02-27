#include <iostream>
using namespace std;

typedef struct Alumno{
    string Nombre;
    string Matricula;
    double calificaciones[6];
}Alumno;

double suma, promedio;
Alumno Julio;

int main(){
    cout << "Nombre: ";
    getline(cin, Julio.Nombre);
    cout << "Matricula: ";
    cin >> Julio.Matricula;
    cout << endl;

    for(int i = 0; i < 5; i++){
        cout << "Calificacion " << i+1 << ": ";
        cin >> Julio.calificaciones[i];
        suma = suma + Julio.calificaciones[i];
    }

    promedio = suma/5;
    cout << "\nEl promedio de " << Julio.Nombre << " es de " << promedio << endl;

    return 0;
}