#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int v1, v2, soma;
    string soma_str;
    cin >> v1 >> v2;
    
    while ( v1 != 0){
        soma = v1 + v2;
    
        soma_str = to_string(soma);
        
        for (int i = 0; i < soma_str.size(); i++){
            if (soma_str[i] != '0')
                cout << soma_str[i];
        }
        cout << endl;
        
        cin >> v1 >> v2;
        
        
    }
    return 0;
}