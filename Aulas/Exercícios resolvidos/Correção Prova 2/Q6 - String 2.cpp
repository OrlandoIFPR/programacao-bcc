#include <iostream>
#include <string>
using namespace std;

int main(){
    string palavra;
    int qtd_vogais = 0;
    
    cin >> palavra;
    
    for (int i = 0; i < palavra.size(); i++){
        if (palavra[i] == 'A' or palavra[i] == 'E' or palavra[i] == 'I' or 
            palavra[i] == 'O' or palavra[i] == 'U' or palavra[i] == 'a' or 
            palavra[i] == 'e' or palavra[i] == 'i' or palavra[i] == 'o' or 
            palavra[i] == 'u'){
                qtd_vogais++;
            }
    }
    cout << qtd_vogais << endl;
    
    return 0;
}