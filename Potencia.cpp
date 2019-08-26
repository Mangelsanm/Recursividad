/* Claculo de la potencia de un numero m usando
 * una funcion recursiva. Este ejemplo es con
 * fines didactios, sin embargo, la potencia de
 * un numero m se puede realizar con un bucle
 * para de esta manera minimizar el uso de memoria
 * en el stack */

/* Recursion descendente (Returning time), en este tipo de
* recursion se llevan acabo operaciones despues de la llamada
* a la funcion */

#include <iostream>
using namespace std;

/* Potencia de un numero m a la potencia n */
int potencia(int m, int n)
{
    if(n == 0)      /* Condicion base para salir de la recursion */
        return 1;   /* La potencia de cualquier numero a la 0 es 1,
                       cuando se alcanza esta linea de codigo se comienza
                       con la multiplicacion descendente, de la linea 23. */
    else
        return potencia(m, n - 1) * m;  /* Llamada a la funcion y operacion de multiplicacion
                                           que se lleva acabo una vez que se alcanza la llamada
                                           potencia(m, 0), multiplicacion en Returning time). */
}

int main()
{
    /* Declaramos el numero m, para calcularse a la potencia n:
       m * m * m * ... * m (n veces). */
    int numero = 9;
    int elevado = 8;

    /* Llamada e impresion del resultado. */
    cout << "La potencia de " << numero << " elevado a " << elevado << " es: " << potencia(numero, elevado) << endl;
    return 0;
}
