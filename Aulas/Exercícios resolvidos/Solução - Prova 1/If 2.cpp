#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int valor;
    cin >> valor;
    
    if (valor % 3 == 0 && valor%5 !=0){
        cout << "Valor Aceito" << endl;
    }else if (valor % 5 == 0 and valor%3 !=0){
        cout << "Valor Aceito" << endl;
    }else{
        cout << "Valor Nao Aceito" << endl;
    }
    return 0;
}