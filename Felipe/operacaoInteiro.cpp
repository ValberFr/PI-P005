#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Digite um valor para a: " << endl;
    cin >> a;
    cout << "Digite um valor para b: " << endl;
    cin >> b;
    c = b + a;
    cout << "Soma em hex: " << hex << c << endl;
    c = b * a;
    cout << "Produto em oct: " << oct << c << endl;
    c = abs(a - b); // recurso da biblioteca 
    cout << c << endl;
    if(b == 0){
        cout << "Divisão não possível" << endl;
    }else{
        c = a / b;
        cout << "Resultado: " << c << endl;
        a % b == 0 ? cout << "Divisão Exata." << endl : cout << "Divisão Não Exata" << endl;
    }

    return 0;
}