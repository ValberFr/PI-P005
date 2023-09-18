#include <iostream>
#include <limits>

using namespace std;

int main(void)
{

    int a, b, c;

    cout << "Digite dois int: " << endl;
    cin >> a;
    cin >> b;

    c = a + b;
    cout << "Soma em hex: " << hex << c << endl;

    c = a * b;
    cout << "Produto em octa: " << oct << c << endl;

    c = a - b;
    if (c < 0)
    {
        c = -c;
    }

    cout << "Modulo da diferença entre os 2 valores: " << c << endl;

    if (b == 0)
    {
        cout << "Nao eh possivel fazer divisao por 0!" << endl;
    }
    else
    {
        c = a / b;
        a % b == 0 ? cout << "Divisao exata!" << endl : cout << "Divisao nao exata" << endl;
        cout << "O valor da divisao em inteiro eh: " << c << endl << endl;
    }

    int valor;

    cout << "Digite o valor int: ";
    cin >> valor;

    valor > numeric_limits<short int>::max() ? cout << "Eh maior que um short int" << endl : cout << "Este valor pertence ao intervalo dos short int" << endl;

    return 0;
}