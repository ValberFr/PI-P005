#include <iostream>

using namespace std;

int main() {

    int info, genes = 0, numGene = 0;

    cout << "Digite a informação genética da planta entre 0 e 255: ";
    cin >> info;

    if (info < 0 || info > 255){
      cout << "Valor incorreto!" << endl;
      return 1;
    }

    unsigned char infoChar = (unsigned char) info;

    for (int i = 0; i < 8; i++) {
        if (infoChar & (1 << i)) {
            genes++;
        }
    }

    cout << "A planta possui " << genes << " genes."<< endl;

    cout << "Digite o número do gene que você deseja procurar entre 1 e 8: ";
    cin >> numGene;

    if (numGene >= 1 && numGene <= 8) {
        if (infoChar & (1 << (numGene - 1))) {
            cout << "O gene " << numGene << " foi encontrado na planta." << endl;
        } else {
            cout << "O gene " << numGene << " não foi encontrado na planta." << endl;
        }
    } else {
        cout << "Número de gene inválido. Digite um valor entre 1 e 8." << endl;
    }

    return 0;
}