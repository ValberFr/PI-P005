#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void){

    double x, y, z, fx;

    cout << "Insira dois números de ponto flutuante: ";

    cin >> x;
    cin >> y;

    fx = 5 * x + 2;

    cout << "Valor da função é: " << fx << endl;

    if (y > fx) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva." << endl;
    } else if (y < fx) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está na curva." << endl;
    }

    z = sqrt(pow(x, 2) + pow(y, 2));
    cout << "A distância euclidiana do ponto (" << x << ", " << y << ") até o centro das coordenadas é: " << z << endl;

    z = x * y;
    cout << "O produto entre x e y em notação científica é: " << scientific << z << endl;

    double a, b, c, discri;
    cout << "Digite os coeficientes do polinômio (a, b, c): " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    discri = b * b - 4 * a * c;

    if(discri > 0){

        double raiz1, raiz2;
        raiz1 = (-b + sqrt(discri)) / (2* a);
        raiz2 = (-b - sqrt(discri)) / (2* a);
        cout << "O polinômio possui duas raízes reais distintas: " << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;

    }else if (discri == 0){
        double raiz;
        raiz = -b / (2 * a);
        cout << "O polinômio possui uma raiz real dupla: " << endl;
        cout << "Raiz: " << raiz << endl;
    }else{
        cout << "O polinômio não possui raiz real!" << endl;
    }

    double px;

    cout << "Informe o valor de x: " << endl;
    cin >> x;

    px = a * x * x + b * x + c;

    cout << "O valor de p(x) é: " << px << endl;

    return 0;
}