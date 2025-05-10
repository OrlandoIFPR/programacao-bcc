#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int valorA, valorB;
    cin >> valorA >> valorB;
    int total = valorA + valorB;
    
    if (total%2==0){
        cout << "A" << endl;
    }else{
        cout << "B" << endl;
    }
    return 0;
}