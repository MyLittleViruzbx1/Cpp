/*6. Escriba un programa que lea las tres notas de un alumno y calcule la
nota final media de dicho alumno*/

#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int main() {
  
    int n1, n2, n3, final;

    cout << "Ingrese nota1: ";
    cin >> n1;
    cout << "Ingrese nota2: ";
    cin >> n2;
    cout << "Ingrese nota3: ";
    cin >> n3;

    final = (n1 + n2, +n3) / 3;

    cout << "La nota final media es: "<<final;


    return 0;

}


