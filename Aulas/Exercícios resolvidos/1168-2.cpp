#include <iostream>
using namespace std;
int main()
{
    int n, soma_leds;
    string leds;
    //                      0  1  2  3  4  5  6  7  8  9
    //int totais_led[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> leds;
        soma_leds = 0;
        for (int j = 0; j < leds.size(); j++){
            
            if (leds[j] == '1')
                soma_leds += 2;
            else if (leds[j] == '7')
                soma_leds += 3;
            else if (leds [j] == '4')
                soma_leds += 4;
            else if (leds[j] == '2' || leds[j] == '3' || 
                     leds[j] == '5')
                soma_leds += 5;
            else if (leds[j] == '0' || leds[j] == '6' || 
                     leds[j] == '9')
                soma_leds += 6;
            else if (leds [j] == '8')
                soma_leds += 7;
        }
        cout << soma_leds << " leds" << endl;
    }
    
    return 0;
}