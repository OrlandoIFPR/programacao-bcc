#include <iostream>
using namespace std;

int main(){
    
    int qt_farinha, qt_leite, qt_ovo;
    
    int total_bolos;
    
    cin >> qt_farinha >> qt_ovo >> qt_leite;
    
    total_bolos = qt_farinha/2;
    
    if (qt_ovo/3 < total_bolos){
        total_bolos = qt_ovo/3;
    }
    
    if (qt_leite/5 < total_bolos){
        total_bolos = qt_leite/5;
    }
    
    cout << total_bolos << endl;
    
    return 0;
}