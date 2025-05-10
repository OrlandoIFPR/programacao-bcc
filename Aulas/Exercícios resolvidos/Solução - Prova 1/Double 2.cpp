#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double distancia, consumo, preco_comb;
    double vl_alimentacao, vl_hospedagem;
    int num_dias, num_pessoas;
    
    
    cin >> distancia >> consumo >> preco_comb >> vl_alimentacao;
    cin >> num_dias >> vl_hospedagem >> num_pessoas;
    
    double total = (distancia/consumo*preco_comb)+
                   (vl_alimentacao*num_dias)+
                   (vl_hospedagem*(num_dias-1));
                   
    
    cout << fixed << setprecision(2);
    cout << "Custo total da viagem: R$ " << total << endl;
    cout << "Custo por pessoa: R$ " << total/num_pessoas << endl;
    
    return 0;
}