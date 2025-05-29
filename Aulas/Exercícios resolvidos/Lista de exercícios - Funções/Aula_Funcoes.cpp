#include <iostream>

using namespace std;

double media(double nota1, double nota2, double nota3){
    return (nota1 + nota2 + nota3) / 3;
}

int maiorNumero(int num1, int num2, int num3){
    if (num1 >= num2 and num1 >= num3)
        return num1;

    if (num2 >= num1 and num2 >= num3)
        return num2;

    return num3;
}

bool ehPar (int numero){
    return numero%2 == 0;
}

bool ehImpar (int numero){
    return !numero%2 == 0;
}

int fatorial (int numero){

    int fat = numero;

    for (int i = numero-1; i > 1; i--){
        fat = fat * i;
    }

    return fat;

}
int calcularFibonacci (int posicao){
    if (posicao == 1)
        return 0;
    if (posicao == 2)
        return 1;

    int penultimo = 0, ultimo = 1, novo;

    for (int i = 3; i <= posicao; i++){
        novo = penultimo + ultimo;
        penultimo = ultimo;
        ultimo = novo;
    }

    return novo;

}

int main(){

    double v1 = 10, v2 = 9.5, v3 = 0.0, nota_final;

    nota_final = media(7.7, 4.2, 8.2);
    cout << "Media 1: " << nota_final << endl;

    nota_final = media(v1, v2, v3);
    cout << "Media 2: " << nota_final << endl;

    cout << "Media 3: " << media(2.5, 4.5, 8.7) << endl;

    cout << "O maior entre 5, 7, 9 eh "<< maiorNumero(5, 7, 9) << endl;


    int valor;
    cin >> valor;

    cout << "O valor " << valor << " tem resultado para ehPar: " << ehPar(valor) << endl;

    cout << "Fatorial(5): " << fatorial(5)<<endl;
    cout << "Fatorial(10): " << fatorial(10)<<endl;


    cout << "Fibo(5): " << calcularFibonacci(5) << endl;
    cout << "Fibo(8): " << calcularFibonacci(8) << endl;

    return 0;
}
