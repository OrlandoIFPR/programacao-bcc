
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, aux;
    cin >> a >> b >> c;
    
    if (b >= a && b >= c){
        aux = a;
        a = b;
        b = aux;
    }else if (c >= a && c >= b){
        aux = c;
        c = a;
        a = aux;
        
    }
    
    if (a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else{
        
        if (a*a == b*b + c*c){
            cout << "TRIANGULO RETANGULO" << endl;
        }else if (a*a > b*b + c*c){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }else{
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        
        if (a==b && b==c){
            cout << "TRIANGULO EQUILATERO" << endl;
        }else if (a==b || a==c || b==c){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    
    return 0;
}