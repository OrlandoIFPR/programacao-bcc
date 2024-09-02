#include <iostream>
using namespace std;

int main()
{
    int valor, divisor = 2;
    cin >> valor;
    
    while (valor % divisor != 0){
        divisor++;
    }
    cout << divisor << endl;

    return 0;
}