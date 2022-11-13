/*
   a+b
   ----
   c+d

*/

#include <iostream>

using namespace std;

int main() {

        
    float a, b,c,d, r = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << "Ingrese el valor de d: ";
    cin >> d;

    r = (a + b)/(c+d);

    cout.precision(2);

    cout <<"\nEl resultado es: " << r;

    return 0;
}
