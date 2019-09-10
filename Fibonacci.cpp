/* Calculo de numero de fibonacci, del indice especificado. */

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if(n <= 1) {        /* Cuando n es igual a cero o uno el resultado de la serie */
        return n;       /* sera el mismo valor de n */
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main() {
    int numero = 29;
    cout << "Numero de fibonacci para el indice " << numero << ": "  << fibonacci(numero) << endl;
    return 0;
}
