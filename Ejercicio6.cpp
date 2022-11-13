#include <iostream>

using namespace std;

int main() {

        
    float a, b, r = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    r = (a / b) + 1;

    cout.precision(2);

    cout <<"\nEl resultado es: " << r;

    return 0;
}