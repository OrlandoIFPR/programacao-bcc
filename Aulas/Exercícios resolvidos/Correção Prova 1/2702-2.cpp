#include <iostream>
using namespace std;

int main(){
    
    int ref_frango, ref_bife, ref_massa;
    int ped_frango, ped_bife, ped_massa;
    
    int sem_refeicao = 0;
    
    cin >> ref_frango >> ref_bife >> ref_massa;
    cin >> ped_frango >> ped_bife >> ped_massa;
    
    int t_frango, t_bife, t_massa;
    t_frango = ped_frango - ref_frango;
    t_massa = ped_massa - ref_massa;
    t_bife =  ped_bife - ref_bife;
    
    
    if (t_frango < 0){
        t_frango = 0;
    }
    
    if (t_bife < 0){
        t_bife = 0;
    }
    
    if (t_massa < 0){
        t_massa = 0;
    }
    
    cout << t_frango+t_bife+t_massa << endl;
    
    return 0;
}