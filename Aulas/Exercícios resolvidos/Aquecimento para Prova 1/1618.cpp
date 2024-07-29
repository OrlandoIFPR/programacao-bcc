#include <iostream>
using namespace std;

int main(){
    int casos;
    int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
    
    cin >> casos;
    for (int i = 0; i < casos; i++){
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;
        if (rx >= dx and rx <= cx and ry >= ay and ry <= dy){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }

    return 0;
}