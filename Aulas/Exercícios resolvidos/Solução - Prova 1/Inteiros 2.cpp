#include <iostream>

using namespace std;

int main(){

    int hr1, min1, seg1, hr2, min2, seg2;
    cin >> hr1 >> min1 >> seg1;
    cin >> hr2 >> min2 >> seg2;
    
    int difereca_seg =  (hr2-hr1)*3600+(min2-min1)*60+(seg2-seg1);
    
    cout << "Diferenca em segundos: " << difereca_seg << endl;
    
    return 0;
}