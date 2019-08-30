/* Serie de Taylor usando una función recursiva y la regla de Horner. */
/* e^x = 1 + x/1! + x^2/2! + x^3/3! + x^4/4! + ... + x^n/n! */
/* Aplicando la regla de Horner, el polinomio de arriba queda como: */
/* e^x = 1 + (x/1) * [1 + (x/2) * [1 + (x/3) * [1 + (x/4)]]] */

#include <iostream>
using namespace std;

double hornerTaylor(double x, double n) {
    static double suma = 1;             /* Declaramos una variable estática para almacenar la suma */

    if(n == 0)
        return suma;
    else {
        suma = 1 + (x / n) * suma;      /* La operación base al aplicar la regla de Horner es */
                                        /* multiplicar (x/n) * 1, apartir de ese punto se suma el */
                                        /* valor de 1, todo esto se almacena en la misma variable */
                                        /* para que la opercion base (x/n) ahora se multiplique */
                                        /* por el estado anterior ("suma") */
        hornerTaylor(x, n-1);           /* Llamada a la función recursiva*/
    }
}

int main() {
    int numero = 2;                     /* Número x a calcular e^x */
    int orden_aproximacion = 100;       /* Número n de aproximación */
    cout << "Aproximacion de e^" << numero  << " usando la regla de Horner: " << hornerTaylor(numero, orden_aproximacion) << endl;
    return 0;
}
