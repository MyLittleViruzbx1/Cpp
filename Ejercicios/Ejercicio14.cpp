/*Ejercicio 9: Realice un programa que calcule el valor que toma la siguiente función para 
unos valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float x, y, r;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;
    r = (sqrt(x)) / (pow(y,2)-1);
    cout << "El resultado es: " << r<< endl;

    return 0;

}