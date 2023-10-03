#include <iostream>

using namespace std;

int main()
{
    unsigned char info;
    int count = 0, gene;

    cout << "Digite um caracter para chechar a informacao genetica da planta: ";
    cin >> info;

    for (int i = 0; i < 8; i++)
    {
        if (info & (1 << i))
        {
            count++;
        }
    }

    cout << "Numero de genes presentes: " << count << endl;

    cout << "Digite o número do gene que voce quer verificar (1 a 8): ";
    cin >> gene;

    if (gene >= 1 && gene <= 8)
    {
        if (info & (1 << (gene - 1)))
        {
            cout << "O gene " << gene << " esta presente na planta!" << endl;
        }
        else
        {
            cout << "O gene " << gene << " nao esta presente na planta!" << endl;
        }
    }
    else
    {
        cout << "Numero invalido, digite um valor entre 1 e 8." << endl;
    }

    return 0;
}