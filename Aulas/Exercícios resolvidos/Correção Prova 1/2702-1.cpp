#include <iostream>
using namespace std;

int main(){
    
    int ref_frango, ref_bife, ref_massa;
    int ped_frango, ped_bife, ped_massa;
    
    int sem_refeicao = 0;
    
    cin >> ref_frango >> ref_bife >> ref_massa;
    cin >> ped_frango >> ped_bife >> ped_massa;
    
    if (ref_frango < ped_frango){
        sem_refeicao = ped_frango - ref_frango;
    }
    
    if (ref_bife < ped_bife){
        sem_refeicao = sem_refeicao + ped_bife - ref_bife;
    }
    
    if (ref_massa < ped_massa){
        sem_refeicao = sem_refeicao + ped_massa - ref_massa;
    }
    
    cout << sem_refeicao << endl;
    
    return 0;
}