#include <iostream>
using namespace std;

int main(){
    
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++){
        string msg;
        int chave;
        cin >> msg;
        cin >> chave;
        
        for (int j = 0; j < msg.size(); j++){
            
            if (msg[j]-chave < 'A'){
                msg[j]= 'Z'-('A'-(msg[j]-chave))+1;
            }else{
                msg[j]= msg[j]-chave;
            }
            
        }
        cout << msg << endl;
        
    }
    
    
    return 0;
}