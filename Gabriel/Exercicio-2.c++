#include <iostream>
#include <ctype.h>

using namespace std;

char char1, char2 = 81,char3;

int main(void){

cout << "Escreva um caractere: ";
cin >> char1;
/* Forma sem o ctype.h com if

if(char1 >= 'A' &&  char1 <= 'Z'){
        cout << "o caractere fornecido é uma letra maiuscula \n" << endl; 
}
    else if(char1 >= 'a' && char1 <= 'z'){
            cout << "O caractere fornecido é uma letra minuscula \n";
}

        else{
                cout << "O caractere fornecido não é uma letra \n" << endl; 

}*/

//forma com ctype.h e operador ?.
string verif = islower(char1) ? "É uma letra minúscula" : isupper(char1) ? "É uma letra maiúscula" : isdigit(char1) ? "É um dígito" : "É um outro tipo de caractere";
cout << verif << endl;
cout << endl;

//O c++ possui a biblioteca ctype.h que ja possui funções para essas verificações de forma automatica. 
cout <<  dec << "A representação do caractere " << char2 << " em decimal = " << int(char2) << "\n";
cout << oct << "A representação do caractere " << char2 << " em octal = " << int(char2) << "\n";
cout << hex << "A representação do caractere " << char2 << " em hexadecimal = " << int(char2) << "\n";
cout << dec << endl;

char3 = tolower(char2);
cout <<  dec << "A representação do caractere " << char3 << " em decimal = " << int(char3) << "\n";
cout << oct << "A representação do caractere " << char3 << " em octal = " << int(char3) << "\n";
cout << hex << "A representação do caractere " << char3 << " em hexadecimal = " << int(char3) << "\n";
cout << endl;

}