#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

int main() {
    int numero;

    cout << "Introduce un número entero positivo: ";
    cin >> numero;

    if (numero < 1) {
        cout << "Por favor, introduce un número entero positivo." << endl;
    } else {
        if (esPrimo(numero)) {
            cout << numero << " es un número primo." << endl;
        } else {
            cout << numero << " no es un número primo." << endl;
        }
    }

    return 0;
}
