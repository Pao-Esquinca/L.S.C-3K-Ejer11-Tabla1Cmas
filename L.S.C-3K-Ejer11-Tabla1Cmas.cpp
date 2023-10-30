// L.S.C-3K-Ejer11-Tabla1Cmas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Tabla de multiplicación de un número PAOLA JAZMIN ESQUINCA LOPEZ

#include <iostream>

using namespace std;

int main() {
    int NUM, I, RESUL;
    int linea;

    cout << "DIGITE NUMERO: ";
    cin >> linea;
    NUM = linea;

    I = 1;
    while (I <= 12) {
        RESUL = NUM * I;
        cout << NUM << " * " << I << " = " << RESUL << endl;
        I = I + 1;
    }


    system("pause");
    return 0;
}