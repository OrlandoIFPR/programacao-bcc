#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double salario, inss, ir;
    
    
    cin >> salario;
    
    inss = salario * 0.08;
    ir = salario * 0.11;
    
    cout << fixed << setprecision(2);
    cout << "Salario Bruto: R$ " << salario << endl;
    cout << "Desconto INSS (8%): R$ " << inss << endl;
    cout << "Desconto IR (11%): R$ " << ir << endl;
    cout << "Salario Liquido: R$ " << salario-inss-ir << endl;
    
    return 0;
}