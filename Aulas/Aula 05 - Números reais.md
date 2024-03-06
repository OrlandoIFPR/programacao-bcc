### Introdução à Programação

#### Números de ponto flutuante

**Prof.**: João Paulo Orlando

**Curso**: Bacharelado em Ciência da Computação

Os números de ponto flutuante (números reais) são representados no hardware do computador como frações de base 2 (binárias). Por exemplo, a fração decimal 0.125 tem valor 1/10 + 2/100 + 5/1000.

Infelizmente, muitas frações decimais não podem ser representadas precisamente como frações binárias. O resultado é que, em geral, os números decimais de ponto flutuante que você digita acabam sendo armazenados de forma apenas aproximada, na forma de números binários de ponto flutuante.

O problema é mais fácil de entender primeiro em base 10. Considere a fração 1/3. Podemos representá-la aproximadamente como uma fração base 10:

`0.3`

ou melhor,

`0.33`

ou melhor,

`0.333`

e assim por diante. Não importa quantos dígitos você está disposto a escrever, o resultado nunca será exatamente `1/3`, mas será uma aproximação de cada vez melhor de `1/3`.

Da mesma forma, não importa quantos dígitos de base 2 estejas disposto a usar, o valor decimal 0.1 não pode ser representado exatamente como uma fração de base 2. No sistema de base 2, `1/10` é uma fração binária que se repete infinitamente:

`0.0001100110011001100110011001100110011001100110011...`

Se parares em qualquer número finito de bits, obterás uma aproximação. 

É fácil esquecer que o valor armazenado é uma aproximação da fração decimal original, devido à forma como os números reais são exibidos. O C++ exibe apenas uma aproximação decimal do verdadeiro valor decimal da aproximação binária armazenada pela máquina. Se o C++ exibisse o verdadeiro valor decimal da aproximação binária que representa o decimal 0.1, seria necessário mostrar:

Para `double`:

`0.1000000000000000055511151231257827021181583404541015625`

Para `float`:

`0.100000001490116119384765625`


Contém muito mais dígitos do que é o esperado e utilizado pela grande maioria dos desenvolvedores, portanto, o C++ limita o número de dígitos exibidos, apresentando um valor arredondado, ao invés de mostrar todas as casas decimais:

```
1.0 / 10

0.1
```

Lembre-se, mesmo que o resultado impresso seja o valor exato de 1/10, o valor que verdadeiramente estará armazenado será uma fração binária representável que mais se aproxima.

#### Problemas com números de ponto flutuante

Após muitas operações, ocorrerá perda da precisão do valor, então em alguns casos é necessário ficar arrendondando os valores para melhorar a precisão.

```C++
#include <iostream>
using namespace std;

int main(){
    float valor = 7.2788;
    cout << valor << endl; // valor impresso 7.2788
    
    // Fixando em duas casas decimais
    int valor2 = valor*100;
    cout << valor2 << endl;  // valor impresso 727

    float valor3 = valor2/100.0;
    cout << valor3 << endl;  // valor impresso 7.27

    return 0;
}
```
Dependendo de como resolverem o problema **1021 - Notas e Moedas**, irão enfrentar esse problema de perda de precisão.


Outra situação, é que em determinados problemas queremos definir a precisão da impressão dos nossos dados. Por exemplo, imagine que estamos desenvolvendo um programa que faz cálculos referentes a dinheiro. Faz sentido para o usuário mostrar que o valor devido pelo usuário é `R$ 120.381`, nesse caso se exibe `R$ 120.38`. Então precisamos modificar a precisão da exibição do nosso programa.

```C++
#include <iostream> // std::fixed
#include <iomanip> // std::setprecision
using namespace std;

int main(){
    
    double pi = 3.14159265358979323846;
    
    cout << pi << endl; 
    // Default, mostra 5 casas decimais, mas se precisarmos de mais?
    
    cout << setprecision(7) << pi << endl;
    // ou menos?
    cout << setprecision(3) << pi << endl;
    
    // e caso precisamos oposto, 
    // precisamos que um número exiba mais casas decimais?
    double num = 7;
    cout << setprecision(4) << num << endl;
    //Não será exibido, então quando todos números deverão ter o mesmo número
    // de casas decimais usamos o comando fixed também.
    
    cout << fixed << setprecision(4) << num <<  endl;

    return 0;
}
```

```C++
#include <iostream> // std::fixed
#include <iomanip> // std::setprecision
using namespace std;

int main(){
    double valor1 = 7.58, valor2 = 6.3333;
    //Ser fixo e a precisão pode ser definida somente uma vez.
    cout << fixed << setprecision(3);
    
    cout << valor1 << endl;
    cout << valor2 << endl;
    
    return 0;
}
```
 
#### Exercícios

1 - Faça um programa que leia 2 valores float (números reais) e exiba as 4 operações básicas. Mostre os valores sempre com 4 casas decimais.
```C++

```

2 - Faça um programa que leia 3 notas numerada de 0.0 até 10.0, calcule e exiba a média com 2 casas decimais.

```C++

```

3 - Mesma coisa do programa anterior, mas agora calcule a média ponderada, onde as notas tem os seguintes pesos: 25, 30 e 45.

```C++

```

4 - Faça um programa que calcule a área de um triângulo, dado a base e a altura em números double. Imprima a área com 3 casas decimais.
Fórmula: `A = b*h/2`

```C++

```

5 - Faça um programa que leia um grau em Celsius e converta ele para Fahrenheit. Exiba os valores com duas casas decimais.
`F = (C * 9/5) + 32`

```C++

```

6 - Faça um programa que calcule o IMC de uma pessoa. Leia o Nome, Peso e Altura da pessoa. Aplique a fórmula: `IMC = peso/(altura^2)`
Exiba o resultado com 1 casa decimal.

```C++

```


Agora podem começar a fazer a **Lista 3 - Números reais**.