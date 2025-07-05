#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int valores[10];
    for (int i = 0; i < 10; i++){
        cin >> valores[i];
    }
    
    for (int i = 9; i >= 0; i--){
        if (valores[i] % 2 == 0){
            cout << "Vetor[" << i << "] = "<< valores[i] << endl;
        }
    }
    return 0;
}