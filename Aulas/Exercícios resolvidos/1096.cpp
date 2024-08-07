#include <iostream>
using namespace std;

int main() {
    
    int i = 1;
    
    while (i <= 9){
        int j = 7;
        while (j >= 5){
            cout << "I=" << i << " J="<< j << endl;
            j--;
        }
        i = i + 2;
    }
    return 0;
}