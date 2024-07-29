#include <iostream>
using namespace std;


int main(){
    int casos, r1, r2;
    cin >> casos;
    for (int i = 0; i < casos; i++){
        cin >> r1 >> r2;
        cout << r1+r2 << endl;
    }
    
    return 0;
}