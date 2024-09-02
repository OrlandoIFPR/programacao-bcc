#include <iostream>
using namespace std;

int main()
{
    int valor, soma = 0, qtd = 0;
    
    while (qtd != 3){
        cin >> valor;
        if (valor % 2 == 0){
            qtd++;
            soma = soma + valor;
        }
        
        
    }
    cout << soma << endl;
    
    return 0;
}