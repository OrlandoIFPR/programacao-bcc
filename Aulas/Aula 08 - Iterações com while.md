### Introdução à Programação

#### Iterações com while

**Prof.**: João Paulo Orlando

**Curso**: Bacharelado em Ciência da Computação


Há outro comando que pode ser usado para construir uma iteração. 

Ele é o comando `while`.

O `while` fornece um mecanismo muito mais geral para a iteração. 

Semelhante ao comando `if`, ele usa uma expressão booleana para controlar o fluxo de execução. 

O corpo do `while` será repetido enquanto a expressão booleana de controle for avaliada como `true`.

Vamos analisar o diagrama de blocos abaixo.

<img src=".\Imagens\08-01.png">

<center> <small> Diagrama gerado em <a href="https://miro.com/app">Miro</a></small> </center>


Formalmente, este é o fluxo de execução do comando `while`:

* Avalie a condição, que deve resultar em `false` ou `true`.

* Se o resultado for `false`, saia do comando `while` e continue o programa executando o próximo comando.

* Se o resultado da condição for `true`, execute os comandos dentro do corpo do `while` e, ao final, retorne ao passo 1.

O corpo do `while` é constituído por todas as instruções dentro do `{` e `}`.

Este tipo de fluxo é chamado de laço (loop) porque o terceiro passo volta para o topo, fechando o laço. 

Observe que se a condição é avaliada como `false` no início do laço, os comandos dentro do corpo nunca serão executados.


```C++
/* Faça um programa que leia uma nota válida,
   Para ser uma nota válida, o valor da nota deve ser maior ou igual a ZERO e 
   menor ou igual a DEZ.
*/

#include <iostream>
using namespace std;

int main() {
	double nota;
	cout <<"Informe uma nota entre 0 e 10: " << endl;
    cin >> nota;
    while (nota < 0 || nota > 10){
        cout << "Nota inválida! Tente novamente!" << endl;
    	cin >> nota;
    }
	
    cout << "A nota válida lida foi: " << nota << endl;  
    return 0;
}
```

```C++
/* Faça um programa que leia uma senha até que 
   o usuário acerte a senha "abc123"
 */
#include <iostream>
using namespace std;

int main(){
    string senha;
    cin >> senha;
    
    while ( senha != "abc123"){
        cout << "Senha incorreta! Por favor, tente novamente!" << endl;
        cin >> senha;
    }
    cout << "Acesso liberado!" << endl;
    return 0;
}
```

```C++
/* Adicione ao programa anterior a possibilidade de 
   o usuário só ter 3 tentativas extra para acessar o sistema
   caso não consiga nas 4 tentativas, o usuário será bloqueado.
*/
#include <iostream>
using namespace std;

int main(){
    string senha;
    int num_tentativas = 3;
    
    cin >> senha;
    
    while ( senha != "abc123" && num_tentativas > 0){
        cout << "Senha incorreta! Por favor, tente novamente! Você tem "<< num_tentativas <<" tentativas ainda!" << endl;
        cin >> senha;
        num_tentativas--;
    }
    if (senha == "abc123")
        cout << "Acesso liberado!" << endl;
    else
        cout << "Usuário bloqueado!" << endl;
    
    return 0;
}
```

O corpo do laço deve alterar o valor de uma ou mais variáveis para que a condição se torne `false` e faça o laço terminar. 

Caso contrário, o ciclo se repetirá para sempre. 

Isso é chamado de um **laço infinito**. 

Veja o exemplo abaixo:

```C++
#include <iostream>
using namespace std;

int main(){
    int i = 1;
    
    while (i < 10){
        if (i%3 == 0)
            cout << i << " é multiplo de 3!" << endl;
        
        i += 1;
    }
    
    return 0;
}
```

Nesse exemplo, podemos provar que o laço termina, pois nós sabemos que o valor de limite é finito e o valor do número é incrementado a cada iteração do laço. 

Portanto, a cada iteração, o valor do número fica mais próximo do limite, até ultrapassá-lo, quando o laço termina. 

Há outros casos onde não é tão fácil dizer se o laço termina.


##### A sequência 3n + 1

Para ilustrar um exemplo com número indefinido de iterações, vamos olhar para uma sequência que tem fascinado matemáticos por vários anos.

A regra para criar a sequência é começar com um dado `n`, e gerar o próximo termo da sequência a partir de `n` da seguinte forma: se `n` for par dividimos `n` por 2, ou senão, multiplicamos `n` por 3 e somamos 1 quando `n` for impar. 

A sequência termina quando `n` se tornar 1.

```C++
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    while (n != 1){
        cout << n << endl;
        if (n % 2 == 0) // n é par
            n = n / 2;
        else            // n é impar
            n = n * 3 + 1;
    }
    cout << n << endl;
    
    return 0;
}
```

A condição para loop `while é n != 1`. Esse loop continuará executando até que `n == 1` (que torna a condição falsa).

A cada iteração do loop, o programa imprime o valor de `n` e então verifica se esse valor é par ou ímpar usando o operador resto. Se ele for par, o valor de `n` é dividido por `2` (usando divisão inteira). Se ele for ímpar, o valor é substituído por `n * 3 + 1`. Teste para vários valores de `n`.

Como `n` às vezes cresce e outras diminui, não há uma prova óbvia de que `n` atinge o valor `1`, ou que o programa termina. Para alguns valores particulares de `n`, podemos provar a terminação. Por exemplo, se o valor inicial é uma potência de `2`, então o valor de `n` será par em todas as iterações do loop até atingir o valor `1`.

#### Do .. While

Existe uma variante do `while`. 
Sintaxe:
```
do{
    // Código interno a ser executado no bloco;
}while(condicao);

```

Este loop sempre executara uma vez o código interno antes de testar se a condição é `true`, mas sequencia funciona que nem o `while` repetindo o loop enquanto a condição for `true`.

```C++
#include <iostream>
using namespace std;

int main() {
	double nota;
	do {
    	cin >> nota;
    }while (nota < 0 || nota > 10);
	
    cout << "A nota válida lida foi: " << nota << endl;  
    return 0;
}
```

#### Comando `break`

A palavra-chave `break` é usada para interromper um `for` ou um `while`.

```C++
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 6; i++){
        if (i == 3)
            break;
        cout << "i = " << i << endl;
    }
    cout << "Loop finalizado!" << endl;  
    return 0;
}
```
```C++
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 6){
        if (i == 3)
            break;
        cout << "i = " << i << endl;
        i++;
    }
    cout << "Loop finalizado!" << endl;  
    return 0;
}
```

**Saída**:
```
i = 0
i = 1
i = 2
Loop finalizado!
```

#### Comando `continue`

A palavra-chave `continue` é usada para terminar a iteração atual em um `for` (ou um `while`) e continua na próxima iteração.

```C++
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 6; i++){
        if (i == 3)
            continue;
        cout << "i = " << i << endl;
    }
    cout << "Loop finalizado!" << endl;  
    return 0;
}
```
```C++
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 6){
        if (i == 3){
            i++;
            continue;
        }
        cout << "i = " << i << endl;
        i++;
    }
    cout << "Loop finalizado!" << endl;  
    return 0;
}
```

Agora podem começar a fazer a **Lista 6 - While**

