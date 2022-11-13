/*
Ejercicio 10: Escriba un programa que calcule las soluciones de una ecuación
de segundo grado de la 
forma ax ^ 2 + bx + c = 0, teniendo en cuenta 
que : (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) y(-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a)
*/


/*
Ejercicio 10: Escriba un programa que calcule las soluciones de una ecuación
de segundo grado de la 
forma ax ^ 2 + bx + c = 0, teniendo en cuenta 
que : (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) y(-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a)
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float b, a, c, r1, r2;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    r1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    cout << "El resultado de - es: " << r1 << endl;
    cout << "El resultado de + es: " << r2 << endl;

    return 0;

}













