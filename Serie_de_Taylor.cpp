/* Serie de Taylor usando una función recursiva. */
/* e^x = 1 + x/1! + x^2/2! + x^3/3! + x^4/4! + ... + x^n/n!*/

#include <iostream>
using namespace std;

double taylor(int x, int n) {
    static double potencia = 1;     /* Declaramos dos variables estáticas para almacenar */
    static double factorial = 1;    /* la potencia y el factorial de cada elemento de la función */
    double previo;                  /* Variable para almacenar el valor de la funcion recursiva */
                                    /* antes de sumar el valor de la potencia entre el factorial */

    if(n == 0)
        return 1;
    else {
        previo = taylor(x, n - 1);
        potencia = potencia * x;        /* Valor inicial de potencia=1, despues se ira multiplicando por x */
                                        /* para obtener el valor de la potencia */
        factorial = factorial * n;      /* Valor inicial de factorial=1, despues se ira multiplicando por n */
                                        /* para obtener el valor del factorial */
        return previo + potencia / factorial;   /* Esta linea representa la suma de cada termino de la ecuación */
    }
}

int main() {
    int numero = 9;                 /* Numero x a calcular e^x */
    int orden_aproximacion = 100;    /* Numero n de aproximacion */
    cout << "Aproximacion de e^" << numero  << ": " << taylor(numero, orden_aproximacion) << endl;
    return 0;
}
