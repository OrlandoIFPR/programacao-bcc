#include <iostream>
using namespace std;

int main(){
    
    int km_total, dist_ped;
    int custo_km, custo_ped;
    
    
    cin >> km_total >> dist_ped;
    cin >> custo_km >> custo_ped;
    
    int total =  km_total*custo_km + km_total/dist_ped*custo_ped;
    
    cout << total << endl;
    

    return 0;
}