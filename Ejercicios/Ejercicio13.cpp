/*Ejercicio 8: Escriba un programa que lea de la entrada estándar los dos 
catetos de un triángulo rectángulo y escriba 
en la salida estándar su hipotenusa.*/

#include<iostream>

using namespace std;

int main() {
    float c1, c2, h;
    cout << "Ingrese el cateto 1 ";
    cin >> c1;
    cout << "Ingrese el cateto 2";
    cin >> c2;

    h = sqrt(pow(c1, 2) + pow(c2, 2));
    
    cout << "La hipotenusa es de: : " << h<< endl;

    return 0;

}