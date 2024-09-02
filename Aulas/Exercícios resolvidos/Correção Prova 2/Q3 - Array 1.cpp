#include <iostream>
using namespace std;

int main()
{
    int vetor[10];
    for (int i = 0; i < 10; i++){
        cin >> vetor[i];
    }
    
    for (int i = 9; i >= 0; i--){
        if (vetor[i] % 2 == 0){
            cout << "Vetor["<<i<<"] = " << vetor[i] << endl;
        }
    }
    
    return 0;
}