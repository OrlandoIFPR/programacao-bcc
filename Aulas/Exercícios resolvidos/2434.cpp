#include <iostream>
using namespace std;

int main(){
    int n_dias, saldo, movimento, menor_saldo;
    
    cin >> n_dias >> saldo;
    menor_saldo = saldo;
    
    for (int i = 1; i <= n_dias; i++){
        cin >> movimento;
        saldo = saldo + movimento;
        
        if (saldo < menor_saldo){
            menor_saldo = saldo;
        }
    }
    
    cout << menor_saldo << endl;
    

    return 0;
}