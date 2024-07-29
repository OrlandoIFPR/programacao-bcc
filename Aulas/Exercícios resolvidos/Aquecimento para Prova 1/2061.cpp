#include <iostream>
using namespace std;

int main(){
    int num_abas, num_passos;
    string procedimento;
    cin >> num_abas >> num_passos;
    for (int i = 0; i < num_passos; i++){
        cin >> procedimento;
        if (procedimento == "fechou")
            num_abas++;
        else
            num_abas--;
    }
    cout << num_abas << endl;
    return 0;
}