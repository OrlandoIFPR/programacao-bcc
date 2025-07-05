#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int valores[3][4];
    double media = 0;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            //cout << i << endl;
            cin >> valores[i][j];
            media = media + valores[i][j];
        }
    }
    media = media / 12;
    
    cout << fixed << setprecision(2);
    cout << media << endl;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if (valores[i][j] < media){
                cout << "M[" << i << "][" << j << "] = " << valores[i][j] << endl;
            }
        }
    }
    
    return 0;
}