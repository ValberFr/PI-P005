#include <iostream>
#include <math.h>
#include <stdio.h>


using namespace std;

double x,y,z,fm,cc,de;

int main()
{
    cout<<"Forneça 2 numeros de ponto flutuante: \n";
    cin >> x;
    cin >> y;
    
    fm = 5 * x + 2;
    
    if(y > fm){
        cout << "A cordenada " << "[" << x  << "," << y << "] " << "está acima da curva." << endl;
        }else if(y < fm){
            cout << "A cordenada " << "[" << x << "," << y << "] " << "está abaixo da curva." << endl;
            }else{
                cout << "A cordenada " << "[" << x << "," << y << "] " << "está na curva." << endl;
                } 
    de = sqrt(pow(x,2.0)+pow(y,2.0));
    
    if(2 - de > 0){
        cout << "A distanca euclidiana em relação ao centro é de: " << 2 - de << endl;
    }else{
        cout << "A distanca euclidiana em relação ao centro é de: " << 2 - de << endl;
        }
    
    z = x * y;
    cout.setf(ios::scientific);
    cout << "Notação ciêntifica: " << z;
    
    return 0;
}
