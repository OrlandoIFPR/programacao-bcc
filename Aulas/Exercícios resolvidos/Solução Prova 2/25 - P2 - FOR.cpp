#include <iostream>
using namespace std;
int main(){
    int n, soma = 0;
    
    cin >> n;
    for (int i = 1; i <= n; i++){
        soma = soma + i * i;
    }

    cout << soma << endl;
    
    return 0;
}