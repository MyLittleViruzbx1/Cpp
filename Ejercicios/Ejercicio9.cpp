#include <iostream>

using namespace std;

int main() {

    int a, b, aux = 0;


    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    aux = a;
    a = b;
    b = aux;

    cout << "\nEl nuevo valor de a es: " << a << endl;
    cout << "\nEl nuevo valor de b es: " << b << endl;




    return 0;
}
