#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nome;
    
    getline(cin, nome);
    
    cout<< nome[0];
    for (int i = 1; i < nome.size()-1; i++){
        if (nome[i] == ' '){
            cout << nome[i+1];
        }
    }
    cout << endl;
    
    return 0;
}