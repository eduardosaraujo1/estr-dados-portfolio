#include <iostream>

using namespace std;

int ex1()
{
    int a = 0;
    int b = 0;
    int s = 0;
    int *pont1 = nullptr;
    int *pont2 = nullptr;

    cout << "Digite o número em 'a': ";
    cin >> a;
    cout << "Digite o número em 'b': ";
    cin >> b;

    pont1 = &a;
    pont2 = &b;

    cout << "&A: " << &a << '\n';
    cout << "&B: " << &b << '\n';
    cout << "&pont1: " << &pont1 << '\n';
    cout << "&pont2: " << &pont2 << '\n';


    s = a + b;

    *pont1 = s;

    cout << "Valor de Pont1: " << *pont1 << '\n';
    cout << "Valor de A: " << a << '\n';

    return 0;
}
