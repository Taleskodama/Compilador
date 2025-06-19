# Compilador da Linguagem "Espanhol" - Parte 02

## Modificações em relação ao trabalho 1

**Ajustes em Operadores Relacionais:** Na parte 1 desse trabalho foi utilizado o '[' para menor e ']' para maior, devido à um conflito com o [] da saída foi alterado para '>>' e '<<' respectivamente.
**Separação de Regras entrada** A regra entrada original foi dividida e renomeada para declaracao (para definir o tipo da variável) e entrada_dados (para a leitura de valores), tornando a gramática mais clara e precisa.

## Ferramentas Utilizadas

* **Flex (Fast Lexical Analyzer Generator):** Para a geração do analisador léxico.
* **Bison (GNU Parser Generator):** Para a geração do analisador sintático.
* **GCC (GNU Compiler Collection):** Para compilar o código-fonte C gerado pelo Flex e Bison.

## Estrutura do Projeto

O projeto é composto pelos seguintes arquivos principais:

* `analisador_lexico.l`: Definições das regras léxicas da linguagem (Flex).
* `analisador_sintatico.y`: Definições das regras gramaticais da linguagem (Bison).
* `main.c`: O ponto de entrada principal do compilador, responsável por orquestrar a análise léxica e sintática.
* `exemplo_entrada_saida.com`: Programa exemplo que demonstra comandos de **entrada e saída**.
* `exemplo_condicionais.com`: Programa exemplo que demonstra **comandos condicionais** (`si`/`demas` e `cambio`/`caso`).
* `exemplo_repeticao.com`: Programa exemplo que demonstra **comandos de repetição** (`para` e `mientras`).

## Como Compilar o Compilador

Para compilar o analisador léxico e sintático, siga os passos abaixo em um ambiente Linux/Unix com Flex, Bison e GCC instalados:

1.  **Gerar o analisador léxico (Flex):**
    ```bash
    flex analisador_lexico.l
    ```
    Isso criará o arquivo `lex.yy.c`.

2.  **Gerar o analisador sintático (Bison):**
    ```bash
    bison -d analisador_sintatico.y
    ```
    Isso criará os arquivos `analisador_sintatico.tab.c` e `analisador_sintatico.tab.h`.

3.  **Compilar o projeto completo:**
    ```bash
    gcc -o meu_compilador lex.yy.c analisador_sintatico.tab.c main.c -lfl
    ```

## Como Executar o Compilador

Para executar o compilador e analisar um dos programas de exemplo, utilize o seguinte comando:

```bash
./meu_compilador <nome_do_arquivo_exemplo>.com

## Exemplos de execução

./meu_compilador exemplo_entrada_saida.com
./meu_compilador exemplo_condicionais.com
./meu_compilador exemplo_repeticao.com