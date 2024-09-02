#include <iostream>
#include <iomanip>
using namespace std;

double media(double val1, double val2, double val3){
    return (val1+val2+val3)/3.0;
}

int main(){
    double v1, v2, v3;
    
    cin >> v1 >> v2 >> v3;
    
    cout << fixed << setprecision(2) << media(v1, v2, v3) << endl;
        
    return 0;
}