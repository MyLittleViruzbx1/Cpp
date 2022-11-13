/*
Realice un programa que lea de la entrada estándar los siguientes datos de una persona :
Edad: dato de tipo entero.
Genero : dato de tipo carácter.
Altura en metros : dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar.


Ejercicio 4: Ejecute el programa del ejercicio anterior con entradas erróneas y observe los resultados.Por ejemplo, introduzca un dato de tipo carácter cuando se espera un dato de tipo entero.
*/


#include <iostream>

using namespace std;

int main() {

    int edad;
    char genero[10];
    float altura;

    cout << "Digite tu edad: ";
    cin >> edad;
    cout << "Digite tu genero: ";
    cin >> genero;
    cout << "Digite tu altura en metros: ";
    cin >> altura;

    cout << "\nTu edad es: " << edad<<endl;
    cout << "\nTu genero es: " << genero << endl;
    cout << "\nTu altura es: " << altura << endl;

    return 0;
}