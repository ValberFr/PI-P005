#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double x, y, z, fx;
    cout << "Digite dois valores diferentes: " << endl;
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

    z = sqrt((x * x)+(y * y));

    cout << "Euclidiana: " << z << endl;

    z = x * y;

    cout.setf(ios::scientific);
    cout << "Valor em notação científica: " << z << endl;

    double a, b, c;
    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;

    
    double discriminante = b * b - 4 * a * c;
    if (discriminante > 0) {
        cout << "O polinômio tem duas raízes reais." << endl;
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } else if (discriminante == 0) {
        cout << "O polinômio tem uma raiz real." << endl;
        double raiz = -b / (2 * a);
        cout << "Raiz: " << raiz << endl;
    } else {
        cout << "O polinômio não tem raízes reais." << endl;
    }


    double d;
    cout << "Digite o valor de x: ";
    cin >> d;
    double px = a * d * d + b * d + c;
    cout << "p(x) = " << px << endl;


    return 0;
}