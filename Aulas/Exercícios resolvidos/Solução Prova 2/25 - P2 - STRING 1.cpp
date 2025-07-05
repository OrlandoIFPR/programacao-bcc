#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string palavra;
    cin >> palavra;
    
    bool todasMaiusculas = true;
    
    for (int i = 0; i < palavra.size(); i++){
        if (palavra[i] >= 'a' and palavra[i] <= 'z'){
            todasMaiusculas = false;
            break;
        }
    }
    
    if (todasMaiusculas){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    
    return 0;
}