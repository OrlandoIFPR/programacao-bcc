#include <iostream>

using namespace std;

int main(){

    int idade, anos_fut;
    cin >> idade;
    cin >> anos_fut;
    
    int idade_fut = idade + anos_fut;
    
    cout << "Sua idade daqui a "<< anos_fut <<" anos sera: " << idade_fut << endl;
    
    return 0;
}