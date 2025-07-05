#include <iostream>
using namespace std;


int main()
{
    int valor_saque, notas_50, notas_10;
    
    cin >> valor_saque;
    
    while (valor_saque%10 != 0){
        cout << "Valor invalido" << endl;
        cin >> valor_saque;
    }
    
    notas_50 = valor_saque/50;
    notas_10 = valor_saque%50/10;
    
    cout << notas_50 << " notas de R$ 50.00" << endl;
    cout << notas_10 << " notas de R$ 10.00" << endl;
    
    
    return 0;
}