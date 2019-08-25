/* Calculo del factorial de un numero n, usando
 * una funcion recursiva. Este ejemplo es con
 * fines didactios, sin embargo, el factorial
 * de un numero n se puede realizar con un bucle
 * para de esta manera minimizar el uso de memoria
 * en el stack */

 /* Recursion descendente (Returning time), en este tipo de
  * recursion se llevan acabo operaciones despues de la llamada
  * a la funcion */

#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)      /* Condicion base para salir de la recursion */
        return 1;   /* El factorial de 0 es 1, cuando se alcanza esta
                       linea de codigo se comienza con la multiplicacion
                       descendente, de la linea 22. */
    else
        return factorial(n - 1) * n;    /* Llamada a la funcion y operacion de multiplicacion
                                           que se lleva acabo una vez que se alcanza la llamada
                                           factorial(0), multiplicacion en Returning time). */
}

int main()
{
    int numero = 10; /* Declaramos el numero n, hasta donde se hara la multiplicacion:
                       1 * 2 * 3 * ... * n. */
    cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;   /* Llamada e impresion del resultado. */
    return 0;
}
