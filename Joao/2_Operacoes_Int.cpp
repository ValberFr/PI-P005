#include <iostream>

using namespace std;

int main(void){

    int a, b, c;

    cout << "Insira dois números inteiros" << endl;

    cin >> a; 
    cin >> b; 

    c = a + b;
    
    cout << "A soma em hexadecimal é: " << hex << c << endl;

    c = a * b;

    cout << "O produto em octal é: " << oct << c << endl;

    c = a - b;
    
    (c < 0) ? c = -c : c = c ;
    
    cout << "O módulo da diferença em inteiro é: " << c << endl;
    //Existe a função abs(), que faz isso de maneira direita. Presente na biblioteca cmath
    
    if(b == 0){
        cout << "Divisão por zero!!!" << endl;
    }else{

        c = a / b;

        (a % b == 0) ? cout << "A divisão é exata!" << endl : cout << "A divisão não é exata!" << endl;
        
        cout << "O valor da divisão em inteiro é: " << c << endl;
    }

    int num;

    cout << "Informe um número inteiro: ";
    cin >> num;

    short int num2 = num;

    cout << "O valor fornecido foi " << num << ((num2 == num) ? " e este valor pertence ao intervalo dos short int" : " e este valor é maior que um short int") << endl;

    
    return 0;
}