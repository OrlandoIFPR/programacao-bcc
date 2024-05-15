### Introdução à Programação

#### Manipulação de arquivos

**Prof.**: João Paulo Orlando

**Curso**: Bacharelado em Ciência da Computação

O armazenamento de dados de variáveis é temporário, ou seja, ao terminar a execução do programa os dados deixam de existir. Isso acontece porque todos as informações de programas rodando ficam na memória princial (RAM). Para que os dados sejam armazenados de forma permanente precisamos salva na memória secundária, por exemplo, disco rígido (HDD).

Para isso, é necessário salvar os dados em arquivos do seu computador.




#### Bibliotecas

Existem três bibliotecas no C++, que são usadas para criar, escrever ou ler arquivos:

Biblioteca | Descrição
- | -
ofstream | Cria e escreve nos arquivos.
ifstream | Lê dos arquivos.
fstream | A combinação das duas anteriores: cria, lê, e escreve em arquivos

Para trabalhar com arquivos inclua a biblioteca que você quiser das 3 mais a biblioteca `<iostream>`:

```C++
#include <iostream> 
#include <fstream> // ou <ofstream> ou <ifstream>
```

#### Criar e gravar em um arquivo

Para criar um arquivo, use a classe `ofstream` ou `fstream` e especifique o nome do arquivo.

Para gravar no arquivo, use o operador de inserção `<<`.

```C++
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    // Cria a variável responsável pela manipulação do arquivo
    ofstream meuEscritor;

    // O método open() cria e abre um arquivo
    meuEscritor.open("teste.txt");
    
    for (int i = 1; i <= 10; i++){
        // Escreve no arquivo
        meuEscritor << "Linha "<< i << ": Trabalhar com arquivos é muito fácil!" << endl;
    }
    
    // Fechar o arquivo, é considerada uma boa prática e pode limpar espaço desnecessário na memória.
    meuEscritor.close();
}
```

O arquivo `teste.txt` irá conter o seguinte texto:

```
Linha 1: Trabalhar com arquivos é muito fácil!
Linha 2: Trabalhar com arquivos é muito fácil!
Linha 3: Trabalhar com arquivos é muito fácil!
Linha 4: Trabalhar com arquivos é muito fácil!
Linha 5: Trabalhar com arquivos é muito fácil!
Linha 6: Trabalhar com arquivos é muito fácil!
Linha 7: Trabalhar com arquivos é muito fácil!
Linha 8: Trabalhar com arquivos é muito fácil!
Linha 9: Trabalhar com arquivos é muito fácil!
Linha 10: Trabalhar com arquivos é muito fácil!
```


#### Ler um arquivo
Para ler um arquivo, use a classe `ifstream` ou `fstream` e o nome do arquivo.

Observe que também utilizamos um loop `while`  junto com a função `getline()` para ler o arquivo linha por linha:

```C++
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream meuEscritor;
    
    meuEscritor.open("teste.txt");
    for (int i = 1; i <= 10; i++)
        meuEscritor << "Linha "<< i << ": Trabalhar com arquivos é muito fácil!" << endl;

    meuEscritor.close();
    
    
    // Uma variável auxiliar para buscar o texto de cada linha do arquivo.
    string textoLinha;
    
    // Cria a variável que fará a leitura do arquivo
    ifstream meuLeitor;
    
    // Abre o arquivo para leitura
    meuLeitor.open("teste.txt");
    
    // Usando um while com getline() para ler linha por linha até o final do arquivo
    while (getline (meuLeitor, textoLinha)) {
        cout << textoLinha << endl;
    }
    
    // Fechando o arquivo
    meuLeitor.close();
}
```

#### Mais sobre o método `open()`

Sintaxe:

`open (<nome_arquivo>, <modo>)`

`<modo>` é um valor ou a combinação dos seguintes
valores:
* `ios::in` – abre o arquivo para leitura (entrada).
* `ios::out` – abre o arquivo para escrita (saída).
* `ios::binary` – abre arquivos que não são de texto.(binários).
* `ios::ate` – coloca a posição inicial de leitura ou escrita no final do arquivo.
* `ios::app` – indica que todas as operações de escrita devem ser feitas no final do arquivo (apenas para escrita).
* `ios::trunc` – se o arquivo aberto para leitura já existia anteriormente, seu conteúdo é apagado.


##### Leitura e escrita

Caso se necessite tanto de operações de leitura quanto de escrita em um mesmo arquivo.

```C++
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    fstream arquivo;
    arquivo.open("teste.txt");
    
    arquivo << "Este é um exemplo simples!";
    
    //Posicionei o cursor no texto no início do arquivo, para poder ler ele todo.
    arquivo.seekp(0);
    
    string saida;
    getline(arquivo, saida);
    
    cout << saida << endl;
    
    arquivo.close();
}
```
Obs: o método `seekp` indica a posição (em bytes) do arquivo em que o próximo dado será lido.


Isso é só uma amostra do que pode ser feito, a documentação completa dessas bibliotecas pode ser vista em:

* [fstream](https://cplusplus.com/reference/fstream/fstream/)
* [ofstream](https://cplusplus.com/reference/fstream/ofstream/)
* [ifstream](https://cplusplus.com/reference/fstream/ifstream/)


Vamos a um exemplo simulando um "banco de dados".

```C++
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int opcao;
    string nome;
    
    do{
        cout << "Informe a opção:" << endl;
        cout << "1 - Inserir um novo aluno" << endl;
        cout << "2 - Listar todos alunos" << endl;
        cout << "3 - Sair" << endl;
        cin >> opcao;
        cout << endl << endl;
        if (opcao == 1){
            ofstream arquivo;
            arquivo.open("alunos.txt", ios::app);
            
            
            cout << "Informe o nome do aluno: ";
            cin >> nome;
            
            arquivo << nome << endl;
            
            arquivo.close();
        }else if (opcao == 2){
            ifstream arquivo;
            arquivo.open("alunos.txt");
            
            cout << "A lista completa dos alunos é: " << endl;
            while(getline(arquivo, nome))
                cout << nome << endl;
            arquivo.close();
        }
        cout << endl << endl;

    }while(opcao != 3);
}
```

