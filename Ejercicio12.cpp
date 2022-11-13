/*7.  La calificación final de un estudiante es la media ponderada de tres notas: 
la nota de prácticas que cuenta un 30% del total,
la nota teórica que cuenta un 60% y la 
nota de participación que cuenta el 10% restante. 
Escriba un programa que lea de la entrada estándar las tres notas 
de un alumno y escriba en la salida estándar su nota final.*/

#include<iostream>
using namespace std;

int main() {
    float practica, teorica, participacion, notaF;
    cout << "Ingrese la nota de practica";
    cin >> practica;
    cout << "Ingrese la nota de teorica";
    cin >> teorica;
    cout << "Ingrese la nota de participacion";
    cin >> participacion;

    practica = practica * 0.30;
    teorica = teorica * 0.60;
    participacion *= 0.10;

    notaF = practica + teorica + participacion;
    
    cout << "La nota final es: " << notaF << endl;

    return 0;

}