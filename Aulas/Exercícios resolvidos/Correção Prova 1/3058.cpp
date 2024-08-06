#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int num_super;
    double menor_valor = 99999999;
    
    cin >> num_super;
    cout << fixed << setprecision(2);
    
    
    for (int i = 0; i < num_super; i++){
        double custo, valor_kg;
        int gramas;
        
        cin >> custo >> gramas;
        
        valor_kg = custo * 1000.0 / gramas;
        
        if (valor_kg < menor_valor){
            menor_valor = valor_kg;
        }
        
    }
    cout << menor_valor << endl;
    
    return 0;
}