#include <iostream>

using namespace std;

int ex2()
{
    const int VET_SIZE = 10;

    int a = 7;
    int b = 12;
    int c = 18;
    int vet[VET_SIZE] = {0};
    int *pt1 = nullptr;
    int *pt2 = nullptr;
    int *pt3 = nullptr;
    int *vaux = nullptr;

    for (int i = 0; i < VET_SIZE; ++i)
    {
        vet[i] = i * 10;
    }

    // Atribuir pt1, pt2 e pt3
    pt1 = &a;
    pt2 = &b;
    pt3 = &c;

    // Exibir informações de `a` e `pt1`
    cout << "Endereço de a: " << &a << '\n';
    cout << "Endereço em pt1: " << pt1 << '\n';
    cout << "Endereço de pt1: " << &pt1 << '\n';
    cout << "Valor em pt1: " << *pt1 << '\n';

    cout << '\n';

    // Atribuir vet[0] em vaux
    vaux = &(vet[0]);

    cout << "Valor em vaux: " << *vaux << '\n';
    cout << "Valor em vet[0]: " << vet[0] << '\n';

    // Modificar e exibir os valores do vetor usando pointer arithimetics
    const int INCREMENT = 10;
    for (int i = 1; i < VET_SIZE; i += 2)
    {
        *(vaux + i) += INCREMENT;
        // vaux[i] += INCREMENT;
        cout << "vet[" << i << "]=" << *(vaux + i) << "; ";
    }
    cout << '\n';

    return 0;
}
