#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double antigo, novo, porcentagem;
    
    cin >> antigo >> novo;
    
    porcentagem = (novo-antigo)*100/antigo;
    
    cout<<fixed << setprecision(2) << porcentagem << "%" << endl;

    return 0;
}