### Introdução à Programação

#### Tipos de dados especiais

**Prof.**: João Paulo Orlando

**Curso**: Bacharelado em Ciência da Computação



#### Modificadores de faixa (ou intervalo)
Em C++ existem alguns modificadores de faixa (ou intervalo). Isso altera a faixa de valores suportada pela variável. São eles: `short`, `long`, `unsigned` e `signed`.

Os modificadores `long` e `short` são utilizados para modificar o tamanho das variáveis em termos de armazenamento de dados. `long` aumenta o tamanho da variável, enquanto `short` diminui.

Os modificadores `signed` e `unsigned` determinam se uma variável pode armazenar apenas números positivos e zero (`unsigned`), ou se pode armazenar números positivos, zero e negativos (`signed`).

#### Resumo de diferentes tipos de dados

Tipo | Intervalo | Tamanho
-|-|-
`bool` | true ou false | 1 byte
| | 
`char` ou `signed char` | -128 a 127 | 1 byte
`unsigned char` | 0 a 255 | 1 byte
| | 
`short int` ou `signed short int` | -32.768 a +32.767 | 2 bytes
`unsigned short int` | 0 a 65.535 | 2 bytes
`int` ou `signed int` | -2.147.483.648 a +2.147.483.647 | 4 bytes
`unsigned int` | 0 a 4.294.967.295 | 4 bytes
`long int` ou `signed long int` | Depende da implementação | 4 bytes ou 8 bytes
`unsigned long int` | Depende da implementação | 4 bytes ou 8 bytes
`long long int` ou `signed long long int` | -9.223.372.036.854.775.808 a +9.223.372.036.854.775.807 | 8 bytes
`unsigned long long int` | 0 a 18.446.744.073.709.551.615 | 8 bytes
 | | 
`float` | 3,4e-38 a 3,4e+38 | 4 bytes
`double` ou `long float` | 1,7e-308 a 1,7e+308 | 8 bytes
`long double` | Depende da implementação, pode chegar até: 3,4e-4.932 a 3,4e+4.932 | 10, 12 ou 16 bytes

No entanto, é importante notar que o tamanho exato de `long` e `short` pode variar dependendo da plataforma e do compilador.

#### Overflow dos tipos

```C++
#include <iostream>
using namespace std;

int main(){
    short int valor = 32767 ;
  
    cout << valor  << endl;
    valor += 1;
    cout << valor  << endl;
    
    return 0;
}
```
**Saída**
```
32767
-32768
```
Reparem o limite do `short int` é 32.767, ao incrementar 1, o valor exibido não será 32.768 e sim -32.768. O valor "deu a volta" e voltou para o limite inferior do valor. Podemos fazer uma analogia com as horas. Imaginemos que vamos somar 6 horas com 7 horas. O resultado seria 13, mas como não existe 13 no relógio, iríamos dar a volta nas horas e chegar ao 1. Assim o resultado será 1.

#### Conversão entre tipos de variáveis

A conversão de uma variável consiste em converter o tipo de uma variável em outro.

**Conversões do tipo implícita**: Consiste em uma modificação do tipo de variável feita automaticamente pelo compilador. 
```C++

double val_f = 3.245624;
int val_i = val_f;

```
**Conversões do tipo explícita**: Também chamada de operação *cast*, consiste em forçar a modificação do tipo de variável usando o operador cast `( )`. 

```C++

double val = 3.245624;
val = (int)val; // val irá guardar apenas a parte inteira de val.

```

#### Tipos estruturados

Em C++, os tipos estruturados, representados pela palavra-chave `struct`, oferecem uma maneira poderosa de organizar e manipular dados relacionados em um único bloco de memória. Uma `struct` permite que os programadores definam seus próprios tipos de dados personalizados, combinando diferentes tipos de dados em uma única unidade.

Ao contrário dos tipos de dados simples, como inteiros e flutuantes, que representam apenas um valor individual, uma `struct` pode conter múltiplos membros, cada um com seu próprio tipo de dado. Esses membros podem incluir variáveis de qualquer tipo de dado válido em C++, incluindo outros tipos de estruturas (structs), arrays, ponteiros e até mesmo funções.

```C++
#include <iostream>
using namespace std;

// Definição da struct Ponto
struct Ponto {
    double x; // Coordenada x do ponto
    double y; // Coordenada y do ponto
};

int main() {
    // Criando uma instância da struct Ponto
    Ponto ponto1;

    // Atribuindo valores às coordenadas x e y do ponto1
    ponto1.x = 3.5;
    ponto1.y = 2.0;

    // Acessando e imprimindo as coordenadas do ponto1
    cout << "Coordenadas do ponto1: (" << ponto1.x << ", " << ponto1.y << ")" << endl;

    // Criando outra instância da struct Ponto e inicializando-a
    Ponto ponto2 = { -1.0, 5.7 };

    // Acessando e imprimindo as coordenadas do ponto2
    cout << "Coordenadas do ponto2: (" << ponto2.x << ", " << ponto2.y << ")" << endl;

    return 0;
}

```

Neste exemplo, a `struct Ponto` possui dois membros de dados: `x` e `y`, que representam as coordenadas x e y de um ponto no plano cartesiano, respectivamente.

No `main()`, são criadas duas instâncias da `struct Ponto`: `ponto1` e `ponto2`. Para acessar os membros de uma `struct`, utilizamos o operador ponto (`.`). Assim, atribuímos valores às coordenadas x e y de cada ponto e, em seguida, imprimimos esses valores na tela.


Outro exemplo, agora para registrar carros:

```C++
#include <iostream>
#include <string>
using namespace std;

struct Carro{
  string marca;
  string modelo;
  int ano;
};


int main() {
  Carro meu_carro1, meu_carro2, meu_carro3;

  meu_carro1.marca = "BMW";
  meu_carro1.modelo = "X5";
  meu_carro1.ano = 1999;

  meu_carro2.marca = "Ford";
  meu_carro2.modelo = "Mustang";
  meu_carro2.ano = 1969;
  
  cout << "Informe os dados do novo carro no seguinte formato \"Marca Modelo Ano\": ";
  cin >> meu_carro3.marca >> meu_carro3.modelo >> meu_carro3.ano;
  

  cout << meu_carro1.marca << " " << meu_carro1.modelo << " " << meu_carro1.ano << endl;
  cout << meu_carro2.marca << " " << meu_carro2.modelo << " " << meu_carro2.ano << endl;
  cout << meu_carro3.marca << " " << meu_carro3.modelo << " " << meu_carro3.ano << endl;
  
  return 0;
}
```

Poderiamos nesse caso declarar um vetores da `struct`.

```C++
Carro meus_carros[10];
```

Agora cada um dos índices acessa um dos carros e seus dados.

```C++
cout << meus_carros[0].marca << " " << meus_carros[0].modelo << " " << meus_carros[0].ano;
```


#### Ponteiros


Um ponteiro é uma variável que armazena o endereço de memória como seu valor.

Uma variável de ponteiro aponta para um tipo de dados do mesmo tipo, e é criado com o operados `*`. Por exemplo:

```C++
string food = "pizza";
string *ptr = &food;

cout << food << endl;
cout << ptr << endl;
```

**Saída**
```
pizza
0x7fff19767160
```
**Obs**: cada vez que executar esse código o valor de `ptr`, provavelmente será diferente.

Uma das responsabilidades primordiais ao lidar com ponteiros é a gestão de memória. Em C++, é possível alocar memória dinamicamente utilizando os operadores new e delete. Por exemplo, `int *ptr = new int;` reserva memória para armazenar um inteiro e atribui o endereço dessa memória a `ptr`. Quando a memória não é mais necessária, é crucial liberá-la utilizando `delete ptr;`.

```C++
#include <iostream>
using namespace std;

int main(){
    
    int *ptr = new int;
    cin >> *ptr;
    cout << "O endereço de memória " << ptr << " possui " << *ptr << " como valor" << endl;

    delete ptr;
    
    return 0;
}
```

Ponteiros são essenciais para estruturas de dados mais complexas.
Vamos ver um exemplo de uma estrutura de dados chama lista, mas não se preocupem isso é assunto de outra disciplina.

```C++
#include <iostream>
using namespace std;

struct Lista{
  int valor;
  Lista* prox;
};

Lista* cria_lista_vazia (){
    return nullptr;
}
Lista* insere_inicio(Lista* lista, int valor){
    Lista *novo = new Lista;
    novo->valor = valor;
    novo->prox = lista;
    return novo;
}
void imprime(Lista* lista){
    Lista* aux = lista;
    while (aux){
        cout << aux->valor << " --> ";
        aux = aux->prox;
    }
    cout << "NULL" << endl;
}
int main(){
    Lista *valores = cria_lista_vazia();
    valores = insere_inicio(valores, 7);
    valores = insere_inicio(valores, 6);
    valores = insere_inicio(valores, 5);
    valores = insere_inicio(valores, 4);
    imprime(valores);
    
    return 0;
}
```

Vamos testar no [Pythontutor](https://pythontutor.com/visualize.html#code=%23include%20%3Ciostream%3E%0Ausing%20namespace%20std%3B%0A%0Astruct%20Lista%7B%0A%20%20int%20valor%3B%0A%20%20Lista*%20prox%3B%0A%7D%3B%0A%0ALista*%20cria_lista_vazia%20%28%29%7B%0A%20%20%20%20return%20nullptr%3B%0A%7D%0ALista*%20insere_inicio%28Lista*%20lista,%20int%20valor%29%7B%0A%20%20%20%20Lista%20*novo%20%3D%20new%20Lista%3B%0A%20%20%20%20novo-%3Evalor%20%3D%20valor%3B%0A%20%20%20%20novo-%3Eprox%20%3D%20lista%3B%0A%20%20%20%20return%20novo%3B%0A%7D%0Avoid%20imprime%28Lista*%20lista%29%7B%0A%20%20%20%20Lista*%20aux%20%3D%20lista%3B%0A%20%20%20%20while%20%28aux%29%7B%0A%20%20%20%20%20%20%20%20cout%20%3C%3C%20aux-%3Evalor%20%3C%3C%20%22%20--%3E%20%22%3B%0A%20%20%20%20%20%20%20%20aux%20%3D%20aux-%3Eprox%3B%0A%20%20%20%20%7D%0A%20%20%20%20cout%20%3C%3C%20%22NULL%22%20%3C%3C%20endl%3B%0A%7D%0Aint%20main%28%29%7B%0A%20%20%20%20Lista%20*valores%20%3D%20cria_lista_vazia%28%29%3B%0A%20%20%20%20valores%20%3D%20insere_inicio%28valores,%207%29%3B%0A%20%20%20%20valores%20%3D%20insere_inicio%28valores,%206%29%3B%0A%20%20%20%20valores%20%3D%20insere_inicio%28valores,%205%29%3B%0A%20%20%20%20valores%20%3D%20insere_inicio%28valores,%204%29%3B%0A%20%20%20%20imprime%28valores%29%3B%0A%20%20%20%20%0A%20%20%20%20return%200%3B%0A%7D&cumulative=false&heapPrimitives=nevernest&mode=edit&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=false).


Outra utilidade é na alocação dinâmica de vetores.

```C++
#include <iostream>
using namespace std;

int main(){
    int *valores = new int[10];
    
    //// trabalho com 10 elementos
    
    delete valores;
    valores = new int[1000000];
    
    //// trabalho com 1.000.000 de elementos agora na mesma variável.
    
    delete valores;
    
    
    return 0;
}
```