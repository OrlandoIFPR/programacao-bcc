#include <iostream>
using namespace std;
int main()
{
    int n, soma_leds;
    string leds;
    int totais_led[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> leds;
        soma_leds = 0;
        for (int j = 0; j < leds.size(); j++){
            soma_leds += totais_led[leds[j]-'0'];
        }
        cout << soma_leds << " leds" << endl;
    }
    
    return 0;
}