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

    cout << "Introduce un n�mero entero positivo: ";
    cin >> numero;

    if (numero < 1) {
        cout << "Por favor, introduce un n�mero entero positivo." << endl;
    } else {
        if (esPrimo(numero)) {
            cout << numero << " es un n�mero primo." << endl;
        } else {
            cout << numero << " no es un n�mero primo." << endl;
        }
    }

    return 0;
}
