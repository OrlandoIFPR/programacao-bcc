#include <iostream>
using namespace std;

int main(){
    
    int volume, num_trocas, val_troca;
    
    cin >> volume >> num_trocas;
    
    for (int i = 0; i < num_trocas; i++){
        cin >> val_troca;
        
        volume = volume + val_troca;
        
        if (volume > 100){
            volume = 100;
        }
        if (volume < 0){
            volume = 0;
        }
    }
    
    cout << volume << endl;
    
    return 0;
}