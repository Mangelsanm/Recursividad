/*Suma de numeros naturales usando recursividad
 *Este ejemplo es con fines de entender como funciona
 *la recursion. Sin embargo, se puede hacer la suma de
 *numeros naturales usando la formuma general de (n(n+1))/2.*/

 /*Recursion descendente (Returning time), en este tipo de
  *recursion se llevan acabo operaciones despues de la llamada
  *a la funcion*/

#include <iostream>
using namespace std;

/*funcion recursiva para numeros naturales*/
int suma(int n) {
    if(n == 0)      /*Condicion base para salir de la recursion*/
        return 0;   /*Cuando se alcanza esta condicion se comienza a hacer la suma descendente*/
    else
        return suma(n - 1) + n; /*llamada a la funcion y operacion de suma que se hace despues de
                                 *de esta llamada (Returning time)*/
}

int main() {
    int numero = 10;    /*declaramos el numero n, hasta donde se hara la suma
                         *1 + 2 + 3 + ... + n*/
    cout << "La suma de los numeros es: " << suma(numero) << endl; /*Llamada e impresion del resultado*/
    return 0;
}
