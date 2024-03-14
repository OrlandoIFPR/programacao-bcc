### Introdução à Programação

#### Condicionais

**Prof.**: João Paulo Orlando

**Curso**: Bacharelado em Ciência da Computação

Condicionais são estruturas de decisão fundamentais nas linguagens de programação que permitem que um programa altere seu comportamento em tempo de execução, dependendo do estado em que se encontra. 

Podemos imaginar um programa em execução como um trem viajando sobre um trilho. 

Algumas bifurcações podem existir ao longo do percurso, e o caminho tomado pelo trem nestes pontos deve ser selecionado por manivelas de controle. 

Dependendo da posição em que se encontra a manivela, o trem pode tomar um ou outro caminho, mas nunca seguir nos dois ao mesmo tempo.

<img src="Imagens\06-01.jpg">


Estruturas condicionais permitem alterar o fluxo de execução de um programa através da verificação de **condições**, que podem ser codificadas em nosso programa por meio de **expressões lógicas**.

#### Expressões lógicas

Expressões lógicas são aquelas cuja avaliação resulta em valores do tipo **booleano**.

O tipo em C++ para armazenar os valores verdadeiro e falso é chamado de `bool`, em homenagem ao matemático britânico George Boole. George Boole criou a Álgebra Booleana, sendo a base de toda a aritmética computacional moderna.

Existem apenas dois valores booleanos. Eles são `1` (`true`) e `0` (`false`). As iniciais minúsculas são importantes, uma vez que True e False não existem.

Os dois principais tipos de operadores para construir expressões lógicas são:
* **Operadores de comparação ou relacionais**: permitem comparar os valores de um par de objetos, e retornam `1` (`true`) caso sejam equivalentes e `0` (`false`) caso contrário; 
* **Operadores lógicos**: úteis para combinar resultados booleanos obtidos de várias comparações, permitindo construir estruturas de decisão mais complexas.

###### Operadores relacionais

Operador | Operação | Exemplo | Interpretação
:---- | :---- | :---- | :---- 
== | Igualdade | x == y | x é igual a y?
!= | Diferença | x != y | x é diferente de y?
\> | Maior que | x > y | x é maior que y?
\>= | Maior ou igual | x >= y | x é maior ou igual a y?
< | Menor que | x < y | x é menor que y?
<= | Menor ou igual | x <= y | x é menor ou igual a y?

```C++
cout << (5==2) << endl; // 5 é igual a 2?
cout << (5!=2) << endl; // 5 é diferente de 2?

cout << ("João"=="Paulo") << endl; // "João" é igual a "Paulo"?
cout << ("João"=="João") << endl; // "João" é igual a "João"?

```

**Respostas**
```
0
1
0
1
```

```C++
int idade = 22;

cout << (idade >= 22) << endl; // A idade é maior ou igual a 22?
cout << (idade > 22) << endl; // A idade é maior que 22?

cout << (idade < 60) << endl; // A idade é menor que 60?
cout << (idade <= 60) << endl; // A idade é menor ou igual a 60?

```
**Respostas**
```
1
0
1
1
```

Usando as comparações é possível ordenar nomes.

```C++
    cout << ("Antonio" > "Geraldo") << endl;
    cout << ("Antonio" < "Geraldo") << endl << endl;
    
    /* Entretanto, cuidado com as letras minúsculas.
        Elas sempre vem depois das letras maiscúlas, 
        vide tabela ASCII.
    */
    cout << ("antonio" > "Geraldo") << endl;
    cout << ("antonio" < "Geraldo") << endl;
```

#### Operadores lógicos

Operador | Operação | Exemplo | Interpretação
:---- | :---- | :---- | :---- 
&& | E lógico | x && y | x e y
\|\| | OU lógico | x \|\| y | x ou y
! | NÃO lógico | !x | negue x

Existem três operadores lógicos: `&&` , `||` e `!`, representando, respectivamente, os operadores AND, OR e NOT. A semântica (significado) desses operadores é similar ao significado deles em português. Por exemplo: , `x > 0 && x < 10` é verdadeiro somente se x é maior do que 0 e, ao mesmo tempo, x é menor do que 10. Como você descreveria isso em palavras? Você diria que x está entre 0 e 10, não incluindo as extremidades.

`n % 2 == 0 || n % 3 == 0` é verdadeiro se uma das condições é verdadeira, isto é, se o número é divisível por 2 ou divisível por 3. Neste caso, uma, ou a outra, ou ambos as partes tem que ser verdadeira para o resultado ser verdadeiro.

Finalmente, o operador `!` nega uma expressão booleana, de forma que `!(x > y)` é verdadeiro se x > y é falso, isto é, se x é menor ou igual a y.


```C++
bool va = true;
bool vb = true;
bool vc = false;
bool vd = false;

cout << (va && vb) << endl;
cout << (va && vc) << endl;
cout << (vb || vc) << endl;
cout << (vc || vd) << endl;
cout << (!vb) << endl;
cout << (!vc) << endl;
cout << (!(va && vb)) << endl;
cout << (!(va && vc)) << endl;
```
**Respostas**:
```
1
0
1
0
0
1
0
1
```

##### Operações lógicas envolvendo comparação

```C++
cout << ((4 > 5) && (3 == 3)) << endl;
cout << ((4 > 5) || (3 == 3)) << endl;
cout << (!(4 > 5 || 3 == 3 )) << endl;
cout << (4 < 5 && 3 == 3 && 5 > 5) << endl;
cout << (4 < 5 || 3 == 3 || 5 > 5) << endl;
```

**Respostas**:
```
0
1
0
0
1
```

##### Erro comum!

Existe um erro muito comum que ocorre quando programadores tentam escrever expressões booleanas. 

Por exemplo, suponha que queremos verificar se uma variável número tem valor 5, 6, ou 7. Em palavras, podemos dizer: “número é igual a 5 ou 6 ou 7”. 

Entretanto, se traduzimos isto em C++, *numero == 5 || 6 || 7*, isso não será correto. 

O operador `||` precisa juntar a verificação das três igualdades. 

A forma correta de escrever isto é `numero == 5 || numero == 6 || numero == 7`. 

Isto pode parecer como um monte de digitação, mas é absolutamente necessário. Não dá para fazer de forma mais compacta.


#### Precedência de operadores

A tabela de precedência de operadores agora é incrementada com mais elementos:

Ranking/Precedência | Operadores | Nomes
:---- | :---- | :----
1 (máxima) | () | Parênteses
2 | +x , -x, ++x, x++, --x, x++, !x  | Positivo, Negativo, Incremento, decremento e Negação lógica
3 | *, /, % | Multiplicação, divisão e resto da divisão
4 | +, - | Adição, subtração
5 | <, <=, >, >= | Operadores de comparação
6 | !=, == | Operadores de comparação
7 | && | E lógico
8 (Mínima) | \|\| | OU lógico

Agora que já sabemos codificar **condições**, podemos de fato construir estruturas condicionais.

#### Execução condicional

Estruturas condicionais podem ter diferentes níveis de complexidade, dependendo do conjunto de condições


##### Seleção unária

Executamos um bloco de código $A$ que somente deve ser executado caso uma determinada condição **seja satisfeita** (ou seja, avaliada como `true`). Caso contrário, o código $A$ é simplesmente ignorado.


<img src=".\Imagens\06-02.png" width=400>

Em C++ usamos a seguinte sintaxe:

```C++ 
if (EXPRESSÃO BOOLEANA){
    COMANDOS_1 // executados se condição tem valor true
    COMANDOS_2        
    COMANDOS_3       
    COMANDOS_4        
}
FLUXO NORMAL DO PROGRAMA
    
```

O comando `if` inicia o bloco, na sequência vem a `EXPRESSÃO BOOLEANA` dentro de uma parênteses que é a condição a ser verificada como verdadeira (true) ou falsa (false), depois tem `{` para iniciar a região que será executada caso a `EXPRESSÃO BOOLEANA` seja verdadeira.

Após esses comandos, tem o `}` que finaliza a região do condicional, e na sequência o fluxo normal do programa continua.

Vamos testar esse código:
```C++
#include <iostream>
using namespace std;

int main (){
    
    int valor;
    cin >> valor;
    
    cout << "Antes de chegar na estrutura condicional (sempre executa)" << endl;
    if (valor > 10){
        cout << "Executo código A" << endl;
        cout << "Executo código B" << endl;
        cout << "Executo código C" << endl;
    }
    cout << "Depois da estrutura condicional (sempre executa)" << endl;

  return 0;
}
```

```C++
#include <iostream>
using namespace std;

int main (){
    double nota1, nota2, media, nota_exame;
    cin >> nota1 >> nota2;
    
    media = (nota1+nota2)/2;

    if (media < 6){
        cout << "Aluno em exame! Informe a nota do exame: ";
        cin >> nota_exame;
    }
    
    return 0;
}
```

##### Seleção binária

Um `if` pode ser associado a um `else`, contendo um bloco de código que é executado casa a condição do `if` **não seja satisfeita** (ou seja, avaliada como `False`).
 
 
 <img src=".\Imagens\06-03.png" width=400>

```C++
#include <iostream>
using namespace std;

int main (){
    
    int valor;
    cin >> valor;
    
    cout << "Antes de chegar na estrutura condicional (sempre executa)" << endl;
    if (valor > 10){
        cout << "Executo código A" << endl;
    }else{
        cout << "Executo código B" << endl;
    }
    cout << "Depois da estrutura condicional (sempre executa)" << endl;

  return 0;
}
```

```C++
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double nota1, nota2, media, nota_exame;
    cin >> nota1 >> nota2;
    
    media = (nota1+nota2)/2;
    cout << fixed << setprecision(2);

    if (media < 6){
        cout << "Aluno em exame! Informe a nota do exame: ";
        cin >> nota_exame;
        cout <<"A média do aluno foi " << ((media+nota_exame)/2) << endl;
    }else{
        cout <<"A média do aluno foi " << media << endl;
    }
    return 0;
}
```
As duas construções tratadas acima se baseiam na verificação de apenas uma condição, que dependendo de como for avaliada (`true` ou `false`), desencadeia um dentre dois possíveis comportamentos. 
Mas e se desejarmos construir uma estrutura condicional que permita **mais do que apenas dois "caminhos" diferentes**? 
Neste caso precisamos verificar mais do que uma única condição.

#### Condicionais aninhados

A primeira forma de incluir mais do que uma condição a ser testada na estrutura condicional é por aninhamento. Como resultado, teremos uma estrutura hierárquica, em que a execução de uma segunda condição depende do resultado de uma primeira condição. Não há limites para o número de níveis hierárquicos em uma estrutura condicional, apesar de que muitos níveis hierárquicos podem tornar o código mais difícil de entender.

Cuidado! Em qualquer linguagem de programa é fundamental respeitar o nível de indentação dos blocos de código em cada nível hierárquico, pois isso torna o código-fonte mais legível.

<img src=".\Imagens\06-04.png" width=400>

```C++
#include <iostream>
using namespace std;

int main (){
    int valor1, valor2;
    cin >> valor1 >> valor2;

    cout << "Antes de chegar na estrutura condicional (sempre executa)" << endl;
    if (valor1 > 10){
        cout << "Executo código A." << endl;
    }else{
        if (valor2 < 10){
            cout << "Executo código B." << endl;     
        }else{
            cout << "Executo código C." << endl;     
        }
    }
    cout << "Depois da estrutura condicional (sempre executa)" << endl;
    return 0;
}
```

#### Condicionais encadeados

Uma sequência de vários `if` e `else` aninhados pode inserir muitos níveis no código-fonte, tornando-o confuso. 

Para evitar este problema, usamos a construção podemos inserir novas condições a serem verificadas usando as palavras `else if`. 

Novamente, exatamente uma ramificação será executada. Não há limites no número de `else if`, mas apenas um simples (e opcional) `else` final é permitido e precisa ser a última ramificação do comando.

Cada condição é verificada em ordem. Se a primeira é falsa, a próxima é então verificada, e assim por diante. Se uma delas é verdadeira, a ramificação correspondente é executada e o comando termina. 

Mesmo que mais do que uma condição seja verdadeira, apenas a ramificação da primeira verdadeira é executada.

```C++
#include <iostream>
using namespace std;

int main (){
    int valor1, valor2;
    cin >> valor1 >> valor2;

    cout << "Antes de chegar na estrutura condicional (sempre executa)" << endl;
    if (valor1 > 10){
        cout << "Executo código A." << endl;
    }else if (valor2 < 10){
        cout << "Executo código B." << endl;     
    }else{
        cout << "Executo código C." << endl;     
    }
    cout << "Depois da estrutura condicional (sempre executa)" << endl;
    return 0;
}
```

**Atenção**: Um novo `if` gera uma nova bifurcação no código-fonte e eles são testes independentes.

```C++
#include <iostream>
using namespace std;

int main (){
    int valor1;
    cin >> valor1;

    cout << "Antes de chegar na estrutura condicional (sempre executa)" << endl;
    if (valor1 < 10){
        cout << "Valor menor que 10." << endl;
    }
    if (valor1 < 5){
        cout << "Valor menor que 5." << endl;     
    }
    cout << "Depois da estrutura condicional (sempre executa)" << endl;
    return 0;
}
```

#### Forma abreviada do If...Else

Há também uma uma forma abrevida de fazer um `if ... else`, mais conhecido como o operador ternário. Porque é composto por três operandos. Pode ser usado para substituir várias linhas código por uma única linha. É frequentemente usado para substituir declarações simples.

**Sintaxe**:

`variable = (condition) ? expressionTrue : expressionFalse;`

Em vez de:
```C++
int time = 20;
if (time < 18) {
    cout << "Good day.";
} else {
    cout << "Good evening.";
} 
```

Você pode simplesmente escrever:

```C++
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result; 
```

#### Switch 

É uma forma de reduzir a complexidade de vários `if … else` encadeados.


O conteúdo de uma variável é comparado com um valor constante, e caso a comparação seja verdadeira, um determinado comando é executado.

**Sintaxe**:
```C++
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```
A expressão `switch` é avaliada uma vez (mais eficiente que vários ifs).

O valor da expressão é comparado com os valores de cada `case`.

Veja o exemplo abaixo:
```C++
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
// Saída "Thursday" (dia 4) 
```
##### Palavra-chave `break`
Quando C++ atinge a break, ele sai do bloco `switch`.

Isso impedirá a execução de mais códigos e testes de casos.

Um `break` pode economizar muito tempo de execução porque "ignora" a execução de todo o resto do código do `switch`.

##### Palavra-chave `default`

A palavra-chave `default` especifica algum código a ser executado se não houver nenhum case executado:

```C++
int day = 4;
switch (day) {
  case 6:
    cout << "Hoje é sábado";
    break;
  case 7:
    cout << "Hoje é domingo";
    break;
  default:
    cout << "Ansioso para o fim de semana";
}
// Saída "Ansioso para o fim de semana" 
```


Vamos agora fazer o exercício [1049](https://www.beecrowd.com.br/repository/UOJ_1049.html) do Beecrowd das duas formas usando aninhados e encadeados.

```C++
//Usando if aninhados
#include <iostream>
using namespace std;

int main(){
    string classe1, classe2, classe3;
    
    cin >> classe1;
    cin >> classe2;
    cin >> classe3;
    
    if (classe1 == "vertebrado"){
        if (classe2 == "ave"){
            if (classe3 == "carnivoro"){
                cout << "aguia" << endl;
            }else{
                cout << "pomba" << endl;
            }
        }else{
            if (classe3 == "onivoro"){
                cout << "homem" << endl;
            }else{
                cout << "vaca" << endl;
            }
        }
    }else{
        if (classe2 == "inseto"){
            if (classe3 == "hematofago"){
                cout << "pulga" << endl;
            }else{
                cout << "lagarta" << endl;
            }
        }else{
            if (classe3 == "hematofago"){
                cout << "sanguessuga" << endl;
            }else{
                cout << "minhoca" << endl;
            }
        }
    }
    return 0;
}
```

```C++
//Outra forma, sem o aninhamento de ifs
#include <iostream>
using namespace std;

int main(){
    string classe1, classe2, classe3;
    
    cin >> classe1;
    cin >> classe2;
    cin >> classe3;
    
    if (classe1 == "vertebrado" && classe2 == "ave" && classe3 == "carnivoro"){
        cout << "aguia" << endl;
    }else if (classe1 == "vertebrado" && classe2 == "ave" && classe3 == "onivoro"){
        cout << "pomba" << endl;
    }else if (classe1 == "vertebrado" && classe2 == "mamifero" && classe3 == "onivoro"){
        cout << "homem" << endl;
    }else if (classe1 == "vertebrado" && classe2 == "mamifero" && classe3 == "herbivoro"){
        cout << "vaca" << endl;
    }else if (classe1 == "invertebrado" && classe2 == "inseto" && classe3 == "hematofago"){
        cout << "pulga" << endl;
    }else if (classe1 == "invertebrado" && classe2 == "inseto" && classe3 == "herbivoro"){
        cout << "lagarta" << endl;
    }else if (classe1 == "invertebrado" && classe2 == "anelideo" && classe3 == "hematofago"){
        cout << "sanguessuga" << endl;
    }else{
        cout << "minhoca" << endl;
    }
    return 0;
}
```

Agora podem começar a fazer a **Lista 4 - Condicionais**.