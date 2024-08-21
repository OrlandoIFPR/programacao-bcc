#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int n, n1, n2, n3;
    string num;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num;
        
        n1  = (num[2]-'0')*10 + num[3]-'0';
        n2 = (num[5]-'0')*100 + (num[6]-'0')*10 + num[7]-'0';
        n3 = (num[11]-'0')*10 + num[12]-'0';
        cout << n1+n2+n3 << endl;
        //Ab23s249ttu21
    }
   

    return 0;
}