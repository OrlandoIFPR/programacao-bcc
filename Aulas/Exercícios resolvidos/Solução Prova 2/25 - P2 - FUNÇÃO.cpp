#include <iostream>
#include <iomanip>

using namespace std;

double dobro(double valor){
    return valor * 2;
}

double triplo(double valor){
    return valor * 3;
}

int main(){
    
    double valor;
    cin >> valor;
    
    cout << fixed << setprecision(2);
    cout << dobro(valor) << endl;
    cout << triplo(valor) << endl;
    
    
    return 0;
}