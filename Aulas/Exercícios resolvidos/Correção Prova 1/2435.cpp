#include <iostream>
using namespace std;

int main(){
    
    int numCH1, numCH2;
    double distCH1, velCH1;
    double distCH2, velCH2;
    
    cin >> numCH1 >> distCH1 >> velCH1;
    cin >> numCH2 >> distCH2 >> velCH2;


    if (distCH1 / velCH1 < distCH2 / velCH2){
        cout << numCH1 << endl;
    }else{
        cout << numCH2 << endl;
    }

    return 0;
}