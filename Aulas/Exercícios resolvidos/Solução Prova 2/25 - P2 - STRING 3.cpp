#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string texto;
    cin >> texto;
    char atual = texto[0];
    int cont_atual = 1;
    for(int i = 1; i < texto.size(); i++){
        if (texto [i] == atual){
            cont_atual++;
        }else{
            cout << atual << cont_atual;
            atual = texto[i];
            cont_atual = 1;
        }
    }
    cout << atual << cont_atual << endl;
    
    return 0;
}