#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string palavra;
    cin >> palavra;
    
    for(int i = 0; i < palavra.size(); i++){
        for (int j = 0; j < i+1; j++){
            cout << palavra[j];
        }
        cout << endl;
    }
    
    return 0;
}