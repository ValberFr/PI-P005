#include <iostream>

using namespace std;

int main(){
    char ch1, ch2 = 81, ch3;
    ch3 = tolower(ch2);
    string aux;
    cout << "Digite um caractere: " << endl;
    cin >> ch1;

    aux = (ch1 >= 'A' && ch1 <= 'Z') ? 'M':
          (ch1 >= 'a' && ch1 <= 'z') ? 'm':
          (ch1 >= '0' && ch1 <= '9') ? '0' : '?';    

    cout << "O caractere digitado foi: " << ch1 << endl;
    cout << "Tipo de caractere: " << aux << endl;
    cout << ch2 << endl;

    cout  << dec << int(ch2) << " - " << oct << int(ch2) << " - " << hex << int(ch2) << " - " << "\'" << ch2 << "\'"  << endl;
    cout  << dec << int(ch3) << " - " << oct << int(ch3) << " - " << hex << int(ch3) << " - " << "\'" << ch2 << "\'"  << endl;


    return 0;
}

//Atividade Avançada: 
// isalpha(ch1) verifica se ch1 é uma letra, e isdigit(ch1) verifica se é um dígito. 
/*
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    // Pedir ao usuário para digitar um caractere e atribuir à ch1
    cout << "Digite um caractere: ";
    cin >> ch1;

    // Verificar o tipo de caractere usando isalpha() e isdigit()
    if (isalpha(ch1)) {
        ch2 = isupper(ch1) ? 'M' : 'm'; // Maiúscula ou minúscula
    } else if (isdigit(ch1)) {
        ch2 = '5'; // Dígito
    } else {
        ch2 = '?'; // Outro tipo de caractere
    }

    // Exibir os resultados
    cout << "O caractere digitado foi: " << ch1 << endl;
    cout << "Tipo de caractere: " << ch2 << endl;

    return 0;
}
*/