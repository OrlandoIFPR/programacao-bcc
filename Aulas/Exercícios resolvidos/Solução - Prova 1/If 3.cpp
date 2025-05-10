#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int ano;
    cin >> ano;
    
    if ((ano%4 == 0 and ano%100 != 0) or (ano%400 == 0)){
        cout << "Bissexto" << endl;
    }else{
        cout << "Nao Bissexto" << endl;
    }
    return 0;
}