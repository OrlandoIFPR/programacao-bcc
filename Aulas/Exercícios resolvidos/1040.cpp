
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
   double n1, n2, n3, n4, media;
   
   cin >> n1 >> n2 >> n3 >> n4;
   media = (n1*2 + n2*3 + n3*4 + n4*1)/10;
   
   cout << fixed << setprecision(1);
   
   cout << "Media: " << media << endl;
   
   if (media >= 7.0){
       cout << "Aluno aprovado." << endl;
   }else if (media < 5.0){
       cout << "Aluno reprovado." << endl;
   }else{
       cout << "Aluno em exame." << endl;
       double nota_exame;
       cin >> nota_exame;
       
       cout << "Nota do exame: " << nota_exame << endl;
       
       media = (media + nota_exame) / 2;
       if (media < 5.0){
           cout << "Aluno reprovado." << endl;
       }else{
           cout << "Aluno aprovado." << endl;
       }
       cout << "Media final: " << media << endl;
       
       
   }
    

    return 0;
}