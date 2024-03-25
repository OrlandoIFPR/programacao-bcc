### Introdução à Programação

#### Funções/procedimentos

**Prof.**: João Paulo Orlando

**Curso**: Bacharelado em Ciência da Computação


As funções e procedimentos são elementos fundamentais na programação em C++, oferecendo uma maneira organizada e modular de estruturar o código. Eles permitem dividir um programa em partes menores e mais gerenciáveis, tornando-o mais legível, reutilizável e fácil de dar manutenção.

A principal diferença entre função e procedimento está na capacidade de retornar valores. As funções são usadas quando se deseja calcular ou produzir um valor de retorno, enquanto os procedimentos são usados para realizar ações sem a necessidade de retornar um resultado específico. Na prática em C++, tem pouca diferença na implementação de uma função ou procedimento. Então apartir de agora só utilizarei o termo função.

#### Criando uma função

O C++ fornece algumas funções predefinidas, como `main()`, que é a função inicial do seu programa. Entretando, você também pode criar suas próprias funções para realizar certas ações.

Para declarar uma função devemos seguir a seguinte sintaxe:
```C++
void minhaFuncao() {
  // Código a ser executado
} 
```
* `minhaFuncao()` é o nome da função;
* `void` é um tipo especial para dizer que não tem retorno, então é um procedimento.
* Entre as chaves, definimos o código que ele deve executar.

#### Chamando uma função

As funções declaradas não são executadas imediatamente. Eles são "salvas para mais tarde serem usadas".

Para chamar uma função, escreva o nome da função seguido por dois parênteses () e um sem vírgula ;

No seguinte exemplo, minhafuncao() é usada para imprimir um texto, quando é chamada:


```C++
#include <iostream>
using namespace std;

void minhaFuncao() {
  cout << "Executado!" << endl;
}

int main() {
  minhaFuncao();
  return 0;
}
```

Uma função pode ser chamada várias vezes:

```C++
#include <iostream>
using namespace std;

void minhaFuncao() {
  cout << "Executado!" << endl;
}

int main() {
  minhaFuncao();
  minhaFuncao();
  minhaFuncao();
  minhaFuncao();
  return 0;
}
```
**Obs**: Se uma função é declarado após o main(), o programa gera erro. Sempre a declaração é antes.

No entanto, é possível separar a declaração e a definição da função para otimização de código.

```C++
#include <iostream>
using namespace std;

// Escopo da função, somente a declaração
void minhaFuncao(); 

int main() {
  minhaFuncao();
  minhaFuncao();
  minhaFuncao();
  minhaFuncao();
  return 0;
}

//Implementação da função.
void minhaFuncao() {
  cout << "Executado!" << endl;
}
```

#### Parâmetros e argumentos

As informações podem ser passadas para funções como parâmetro. Os parâmetros atuam como variáveis dentro da função.

Os parâmetros são especificados após o nome da função, dentro dos parênteses. Você pode adicionar quantos parâmetros quiser, basta separá-los com uma vírgula:

Exemplo:
```C++
#include <iostream>
using namespace std;

void imprimaNota(int qtd, string valor); 

int main() {
  imprimaNota(5, "100,00");
  imprimaNota(1, "50,00");
  imprimaNota(0, "20,00");
  imprimaNota(1, "10,00");
  imprimaNota(1, "5,00");
  imprimaNota(2, "2,00");
  imprimaNota(0, "1,00");
  
  return 0;
}

void imprimaNota(int qtd, string valor) {
  cout << qtd << " nota(s) de R$ "<< valor << endl;
}
```

#### Parâmetros com valores Default

Em C++, as funções também podem ter parâmetros opcionais, para os quais nenhum argumento é necessário na chamada, de tal forma que, por exemplo, uma função com três parâmetros pode ser chamada com apenas dois. Para isso, a função deve incluir um valor padrão para seu último parâmetro, que é usado pela função quando chamada com menos argumentos.

```C++
#include <iostream>
using namespace std;

void imprimaSoma(int a, int b = 0, int c = 0){
  cout << "Soma = " << a+b+c << endl;
}
int main() {
  imprimaSoma(1, 3, 5);
  imprimaSoma(1, 3);
  imprimaSoma(5);
  
  
  return 0;
}
```

Retornando valor 

A palavra-chave `void`, usada nos exemplos anteriores, indica que a função não deve retornar um valor. Se você quer que a função retorne um valor, você pode usar um tipo de dados (como int, float, double, string, etc) em vez de void, e usar o comando return dentro da função:

```C++
#include <iostream>
using namespace std;

int myFunction(int x) {
  return 5 + x;
}

int main() {
  cout << myFunction(3) << endl;
  return 0;
}
```

Outro exemplo que retorna a soma dois parâmetros para uma variável no `main()`.

```C++
#include <iostream>
using namespace std;

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int soma = myFunction(5, 3);
  cout << soma << endl;
  return 0;
}
```

#### Passando valores por referência

Veja o exemplo abaixo, quais serão os valores impressos:

```C++
#include <iostream>
using namespace std;

void troca(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
}

int main() {
  int x = 10, y = 20;
  troca(x, y);
  cout << x << " " << y << endl;
  return 0;
}
```
Vams executar esse código no [PyTutor](https://pythontutor.com/render.html#code=%23include%20%3Ciostream%3E%0Ausing%20namespace%20std%3B%0A%0Avoid%20troca%28int%20x,%20int%20y%29%20%7B%0A%20%20int%20temp%20%3D%20x%3B%0A%20%20x%20%3D%20y%3B%0A%20%20y%20%3D%20temp%3B%0A%7D%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20x%20%3D%2010,%20y%20%3D%2020%3B%0A%20%20troca%28x,%20y%29%3B%0A%20%20cout%20%3C%3C%20x%20%3C%3C%20%22%20%22%20%3C%3C%20y%20%3C%3C%20endl%3B%0A%20%20return%200%3B%0A%7D&cumulative=false&curInstr=11&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=false)

Em C++, a passagem de valores por referência é uma técnica que permite que uma função acesse e modifique diretamente o conteúdo de uma variável fora de seu escopo. Em contraste com a passagem por valor, onde uma cópia do valor é passada para a função, na passagem por referência, é passado um endereço de memória da variável original.

Para passar um valor por referência em C++, você precisa declarar os parâmetros da função usando o operador '&' antes do nome do parâmetro. Por exemplo:

```C++
#include <iostream>
using namespace std;

void troca(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

int main() {
  int x = 10, y = 20;
  troca(x, y);
  cout << x << " " << y << endl;
  return 0;
}
```
Vamos ver a diferença nesse caso [PyTutor](https://pythontutor.com/render.html#code=%23include%20%3Ciostream%3E%0Ausing%20namespace%20std%3B%0A%0Avoid%20troca%28int%20%26x,%20int%20%26y%29%20%7B%0A%20%20int%20temp%20%3D%20x%3B%0A%20%20x%20%3D%20y%3B%0A%20%20y%20%3D%20temp%3B%0A%7D%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20x%20%3D%2010,%20y%20%3D%2020%3B%0A%20%20troca%28x,%20y%29%3B%0A%20%20cout%20%3C%3C%20x%20%3C%3C%20%22%20%22%20%3C%3C%20y%20%3C%3C%20endl%3B%0A%20%20return%200%3B%0A%7D&cumulative=false&curInstr=11&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=false).

Ao usar a passagem por referência, a função pode modificar diretamente o valor da variável original. Isso é útil quando se deseja evitar a sobrecarga de memória associada à passagem por valor, especialmente quando se trabalha com grandes estruturas de dados.

Além disso, a passagem por referência é frequentemente utilizada quando se deseja retornar mais de um valor de uma função, pois os valores modificados podem ser mantidos após a execução da função.

No entanto, é importante ter cuidado ao usar a passagem por referência, pois ela pode levar a efeitos colaterais inesperados se não for utilizada corretamente. Por exemplo, uma função que modifica uma variável por referência pode impactar o comportamento de outras partes do código que dependem do valor original da variável. Portanto, é crucial entender o impacto e o escopo das modificações ao utilizar a passagem por referência em C++.

#### Sobrecarga de função

Com sobrecarga de função, múltiplas funções podem ter o mesmo nome com diferentes parâmetros:

```C++
int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)
```

Considere o exemplo a seguir, que tem duas funções que adicionam números de tipo diferente:

```C++
#include <iostream>
using namespace std;

int somaInts(int x, int y) {
  return x + y;
}

double somaDoubles(double x, double y) {
  return x + y;
}

int main() {
  int soma1 = somaInts(8, 5);
  double soma2 = somaDoubles(4.3, 6.26);
  cout << "Int: " << soma1 << endl;
  cout << "Double: " << soma2 << endl;
  return 0;
}

```
#### Exercícios

1 - Escreva uma função em C++ chamada `media` que calcula a média de três números de ponto flutuante passados como parâmetros.

2 - Crie uma função em C++ chamada `maiorNumero` que recebe três números inteiros como parâmetros e retorna o maior deles.

4 - Implemente uma função em C++ chamada `ehPar` que verifica se um número inteiro passado como parâmetro é par ou não, retornando true se for par e false caso contrário.

5 - Escreva uma função em C++ chamada `fatorial` que calcula o fatorial de um número inteiro passado como parâmetro.

6 - Implemente uma função em C++ chamada `ehPrimo` que verifica se um número inteiro passado como parâmetro é primo ou não, retornando true se for primo e false caso contrário.

7 - Implemente uma função em C++ chamada `potencia` que calcula a potência de um número inteiro base elevado a um expoente inteiro passados como parâmetros.

8 - Implemente uma função chamada `calcularFibonacci` que recebe um número inteiro positivo como argumento e retorna o termo correspondente na sequência de Fibonacci.