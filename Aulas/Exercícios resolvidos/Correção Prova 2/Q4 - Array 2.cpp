#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int mat[3][4];
    double media = 0.0;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> mat[i][j];
            media = media + mat[i][j];
        }
    }
    media = media / 12.0;
    cout << fixed << setprecision(2) << media << endl;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if (mat[i][j] < media){
                cout << "M["<<i << "]["<<j<<"] = " << mat[i][j]<< endl;
            }
        }
    }    
    return 0;
}