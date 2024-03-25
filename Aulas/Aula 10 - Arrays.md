### Introdução à Programação

#### Arrays

**Prof.**: João Paulo Orlando

**Curso**: Bacharelado em Ciência da Computação

Um array é uma série de elementos do mesmo tipo colocados em locais de memória contíguos que podem ser referenciados individualmente por um índice. 

Isso significa que, por exemplo, 5 valores do tipo `int` podem ser declarados como um array sem a necessidade de declarar 5 variáveis ​​diferentes (cada uma com seu próprio identificador). Em vez disso, usando uma array, os 5 valores inteiros são armazenados em locais de memória contíguos e todos eles podem ser acessados ​​usando o mesmo identificador, com um índice diferente.

Por exemplo, um array contendo 5 valores inteiros do tipo `int`, chamado `numero`, poderia ser representado como:

<img src=".\Imagens\10-01.png" width="400">

onde cada painel em branco representa um elemento do array. Neste caso, estes são valores do tipo int. Esses elementos são numerados de 0 a 4, sendo 0 o primeiro e 4 o último; Em C++, o primeiro elemento de um array é sempre numerado com zero (não um), independentemente do seu comprimento.

Como uma variável regular, um array deve ser declarado antes de ser usado.

Para declarar um array, defina o tipo da variável, especifique o nome da variável do array seguido de colchetes e especifique o número de elementos que ele deve armazenar:

Por exemplo:
```C++
string carros[5];

int num_mega_sena[6];
```

#### Inicializando arrays
Por padrão, arrays não são inicializados. Isso significa que nenhum de seus elementos está definido com um valor específico; seu conteúdo é indeterminado no momento em que o array é declarado. Entretanto os elementos podem ser inicializados na hora da declaração do array.

```C++
int mega_sena[6] = {3, 7, 11, 35, 38, 56};
```

<img src=".\Imagens\10-02.png" width="450">

O número de valores entre colchetes `{}` não deve ser maior que o número de elementos do array. Por exemplo, no exemplo acima, `mega_sena` foi declarado ter 6 elementos (conforme especificado pelo número entre colchetes, `[]`) e os colchetes `{}` continham exatamente 6 valores, um para cada elemento. Se declarado com menos, os elementos restantes serão definidos com seus valores padrão (valor padrão de inteiro é zero). Por exemplo:

```C++
int mega_sena[6] = {3, 7, 11};
```

<img src=".\Imagens\10-03.png" width="450">

Quando uma inicialização de valores é fornecida para um array, C++ permite a possibilidade de deixar os colchetes vazios []. Neste caso, o compilador assumirá automaticamente um tamanho para o array que corresponda ao número de valores incluídos entre chaves {}:

```C++
int mega_sena[] = {3, 7, 11, 35, 38, 56};
```
Após esta declaração, o array `mega_sena` teria 6 elementos, já que fornecemos 6 valores de inicialização.

#### Acessando os valores de um array

Os valores de qualquer um dos elementos de um array podem ser acessados ​​da mesma forma que o valor de uma variável regular do mesmo tipo. A sintaxe é:
```C++
name[index]
```
Seguindo os exemplos anteriores em que `mega_sena` tinha 6 elementos e cada um desses elementos era do tipo int, o nome que pode ser usado para se referir a cada elemento é o seguinte:

<img src=".\Imagens\10-04.png" width="450">

Por exemplo, a instrução a seguir armazena o valor 25 no terceiro elemento de `mega-sena`:
```C++
mega_sena[2] = 25;
```

e, por exemplo, o seguinte código copia o valor do terceiro elemento de `mega-sena`para uma variável chamada `x`:

```C++
x = mega_sena[2];
```
Portanto, a própria expressão `mega_sena[2]` é uma variável do tipo `int`.

Observe que o terceiro elemento `mega_sena` é especificado `mega_sena[2]`, pois o primeiro é `mega_sena[0]`, o segundo é `mega_sena[1]` e, portanto, o terceiro é `mega_sena[2]`. Por esta mesma razão, seu último elemento é `mega_sena[5]`. Portanto, se escrevermos `mega_sena[6]`, estaremos acessando o sétimo elemento de `mega_sena` e, portanto, excedendo o tamanho do array.

Em C++, é sintaticamente correto exceder o intervalo válido de índices para um array. Isso pode criar problemas, pois acessar elementos fora do intervalo não causa erros na compilação, mas pode causar erros em tempo de execução. A razão para isso ser permitido será explicada, quando o conceito de ponteiros for introduzido.

Neste ponto, é importante ser capaz de distinguir claramente entre os dois usos que os colchetes `[]` têm em relação aos arrays. Eles executam duas tarefas diferentes: 
* uma é especificar o tamanho dos arrays quando eles são declarados; 
* e a segunda é especificar índices para elementos do array quando eles são acessados. Não confunda esses dois possíveis usos de colchetes `[]`.

For com arrays

Você pode percorrer os elementos do array com o loop `for`.

O exemplo a seguir imprime todos os elementos do array `carros`:

```C++
#include <iostream>
using namespace std;

int main() {
  string carros[5] = {"Volvo", "BMW", "Ford", "Mercedes", "Tesla"};
  for (int i = 0; i < 5; i++) {
    cout << carros[i] << endl;
  }
  return 0;
}
```

#### Loop for-each
Há também um "loop for-each" (introduzido na versão 11 do C++), usado exclusivamente para percorrer elementos em um array:

Sintaxe:
```
for (tipo nome_variavel: nome_array) {
  // bloco de código a ser executado
}
```

O exemplo a seguir imprime todos os elementos de um array, usando um "loop for-each":

Exemplo

```C++
#include <iostream>
using namespace std;

int main() {
  string carros[5] = {"Volvo", "BMW", "Ford", "Mercedes", "Tesla"};
  for (string carro: carros) {
    cout << carro << endl;
  }
  return 0;
}
```

#### Obter o tamanho de um array

Para obter o tamanho de um array, você pode usar o `sizeof()` operador:

```C++
int numeros[5] = {10, 20, 30, 40, 50};
cout << sizeof(numeros);
```
**Resultado**
```
20
```

O resultado exibido foi 20 em vez de 5.
É porque o operador `sizeof()` retorna o tamanho de um tipo em bytes .

O tipo `int` geralmente tem 4 bytes, portanto, no exemplo acima, 4 x 5 (4 bytes x 5 elementos) = 20 bytes .

Para descobrir quantos elementos um array possui, você deve dividir o tamanho do array pelo tamanho do tipo de dados que ele contém:
```C++
int numeros[5] = {10, 20, 30, 40, 50};
int tamArray = sizeof(numeros) / sizeof(int);
cout << tamArray << endl;
```

**Resultado**:
```
5
```

Anteriormente, escrevemos o tamanho do array na condição do loop ( i < 5). Isso não é o ideal, pois só funcionará para arrays de um tamanho fixo.

No entanto, usando o operador `sizeof()`, podemos agora criar loops que funcionam para arrays de qualquer tamanho, o que é mais adequado.

```C++
#include <iostream>
using namespace std;

int main() {
  string carros[5] = {"Volvo", "BMW", "Ford", "Mercedes", "Tesla"};
  for (int i = 0; i < sizeof(carros)/sizeof(string); i++) {
    cout << carros[i] << endl;
  }
  return 0;
}
```

Outra solução é definir uma constante:

```C++
#include <iostream>
using namespace std;

int main() {
  const int TAM = 5;
  string carros[TAM] = {"Volvo", "BMW", "Ford", "Mercedes", "Tesla"};
  for (int i = 0; i < TAM; i++) {
    cout << carros[i] << endl;
  }
  return 0;
}
```

#### Vetor X Matriz

Um vetor é uma array unidimensional de elementos armazenados em uma "única linha", enquanto uma matriz é um array bidimensional de elementos organizados em "linhas e colunas". 

Para declarar um array bidimensional, defina o tipo de variável, especifique o nome do array seguido por colchetes que especificam quantos elementos a matriz principal possui, seguido por outro conjunto de colchetes que indica quantos elementos as submatrizes possuem:

 ```C++
 string letras[2][4];
 ```

Tal como acontece com arrays simples, podemos inicializar um array bidimensional:

 ```C++

string letras[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
 ```

Cada conjunto de colchetes em uma declaração de array adiciona outra dimensão a um array. Diz-se que uma matriz como a acima tem duas dimensões.




As matrizes podem ter qualquer número de dimensões. Quanto mais dimensões um array tiver, mais complexo se tornará o código.


```C++
string letras[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};
```

#### Acessando valores de uma matriz

```C++
string letras[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

cout << letras[0][2];  // Saída será "C"
```

#### Alterar elementos em uma matriz

```C++
string letras[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
letras[0][0] = "Z";

cout << letras[0][0];  // Saída é "Z" em vez de "A"
```

#### Loop em uma matriz

Para percorrer um array multidimensional, você precisa de um loop para cada uma das dimensões do array.

O exemplo a seguir impre todas as letras do array:

```C++
string letras[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) {
    cout << letras[i][j] << endl;
  }
}
```

O próximo exemplo mostra como percorrer uma matriz tridimensional:

```C++
string letras[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
      cout << letras[i][j][k] << endl;
    }
  }
}
```

Matrizes multidimensionais são ótimas para representar grades. Este exemplo mostra um uso prático para eles. No exemplo a seguir usamos um array multidimensional para representar um pequeno jogo de Batalha Naval:

```C++
#include <iostream>
using namespace std;

int main() {
  // 1 representa a um barco nessa região.
  bool barcos[4][4] = {
    { 0, 1, 1, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
  };

  // Número de acertos
  int acertos = 0;
  // Número de turnos
  int turnos = 0;

  // Mantem a execução do programa até acertar 4 barcos
  while (acertos < 4) {
    int linha, coluna;

    cout << "Informe as coordenadas" << endl;

    // Entrada do número da linha
    cout << "Escolha uma linha (número de 0 até 3): ";
    cin >> linha;

    // Entrada do número da coluna
    cout << "Escolha uma coluna (número de 0 até 3): ";
    cin >> coluna;

    // Verificando se existe um barco nessa coordenada
    if (barcos[linha][coluna]) {
      // Se o usuário acerto, então removemos o barco do mapa.
      barcos[linha][coluna] = 0;

      // Aumentamos o número de acertos
      acertos++;

      // Avisamos o usuário que acerto e avisamos quantos faltam ainda.
      cout << "Acertou! Faltam " << (4-acertos) << " barcos!\n\n";
    } else {
      // Avisamos que errou
      cout << "Errou!\n\n";
    }

    // Contamos mais um turno do jogo
    turnos++;
  }

  cout << "Vitória!\n";
  cout << "Você venceu em " << turnos << " turnos!";
  
  return 0;
}

```

Agora podem começar a fazer a **Lista 7 - Arrays**

**Obs**: Nem todos os exercícios precisam de arrays para serem resolvidos, entretanto é obrigatório em todos os exercícios o uso de array.