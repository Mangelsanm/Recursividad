/* Calculo de la potencia de un numero m usando una funcion recursiva.
 * Con este enfoque se llevan acabo menos operaciones para obtener la
 * potencia de un numero m elevado a la n.*/

#include <iostream>
using namespace std;

int Potencia(int m, int n) {
    if(n == 0)
        return 1;
    else if(n % 2 == 0)                         /* Para n, cuando es numero par. */
        return Potencia(m * m, n/2);            /* (m^2)^(n/2) */
                                                /* ejemplo (m= 2, n=12) -> (4)^6 */
    else                                        /* Para n, cuando es numero impar. */
        return Potencia(m * m, (n - 1)/2) * m;  /* m * (m^2)^((n - 1)/2) */
                                                /* ejemplo: (m = 5, n = 7) -> 5*(25)^3 */
}

int main() {
    int numero = 5;
    int elevado = 7;
    cout << "El valor de " << numero << " elevado a la " << elevado << " potenica, es: " << Potencia(numero, elevado) << endl;
    return 0;
}
