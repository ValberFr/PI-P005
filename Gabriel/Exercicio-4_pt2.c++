#include <iostream>
#include <math.h>
#include <stdio.h>


using namespace std;

int a,b,c,x,del;

int main()
{
    cout<<"Forneça os valores a,b e c do polinômio: \n";
    cin >> a;
    cin >> b;
    cin >> c;
    
    del = (pow(b,2) -4 * a * c );
    cout << del << endl;
    if(del > 0){
        cout << "O polinômio possui 2 raizes distintas, sendo elas: " << (b * -1) + (sqrt(del/( 2 * a))) << " e " << (b * -1) - (sqrt(del/( 2 * a))) << endl; 
        }else if(del == 0){
            cout << "O polinômio possui somente uma raiz real, sendo ela: " << (b * -1) + (sqrt(del/( 2 * a)))  << endl;
            }else{
             cout << "O polinômio não possui raizes reais." << endl;   
            }
    cout << endl
    
    cout << "Agora infome o valor de x do polinômio: " << endl;
    cin >> x;
    cout << endl;
    
    cout << "A expressão ao todo é " << a << x << "²" << b << x << c << ", sendo p(x)= " << pow((a*x),2)+(b*x)+c; 
    
    return 0;
}
