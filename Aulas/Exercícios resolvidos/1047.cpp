
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int hora1, minuto1, hora2, minuto2, tempo1, tempo2, duracao;
    
    cin >> hora1 >> minuto1 >> hora2 >> minuto2;
    
    tempo1 = hora1*60 + minuto1;
    tempo2 = hora2*60 + minuto2;
    
    if (tempo2 > tempo1){
        duracao = tempo2 - tempo1;
    }else{
        duracao = 24*60-tempo1+tempo2;
    }
    
    cout << "O JOGO DUROU "<< (duracao/60) <<" HORA(S) E "
         << (duracao%60) <<" MINUTO(S)" << endl;

    return 0;
}