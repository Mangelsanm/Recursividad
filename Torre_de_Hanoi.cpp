/* Juego de la torre de Hanoi para n numero de discos. */
/* Usando una función recursiva se resuelve el problema. */

#include <iostream>
using namespace std;

/* n es el número de discos, A, B y C son cada una de las tres torres. */
void hanoi(int n, int A, int B, int C) {
    if(n > 0) {
        hanoi(n-1, A, C, B);
        cout << "(" << A << ", " << C << ")" << flush;
        hanoi(n-1, B, A, C);
    }
}

int main() {
    hanoi(3, 1, 2, 3);
    cout << endl;
    return 0;
}
