#include <iostream>

using namespace std;

int ex3(int *a, int *b)
{
    int aux = 0;
    if (*a > *b)
    {
        int *c = a;
        a = b;
        b = c;
    }
    // Agora `a` é sempre menor que `b`.
    aux = *a % 2 == 0
        ? *a + 1
        : *a;

    while (aux < *b) {
        cout << aux << ";";
        aux += 2;
    }

    return 0;
}
