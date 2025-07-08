#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
        int idade;
        float saldo;
        char categoria;
        int multiplicador;
        float taxaJuros;
        int resultadoLogico;
        int valorReferencia;
        taxaJuros = 0.05;
        valorReferencia = 20;
printf("%s\n", "Digite sua idade: ")  
  scanf("%d", &idade);
printf("%s\n", "Digite seu saldo: ")    scanf("%d", &saldo);
printf("%s\n", "Digite a categoria (A, B, C): ")    scanf("%d", &categoria);
    if (idade > 18 && saldo <= 1000) {
printf("%s\n", "Acesso permitido ou condicoes favoraveis!")        multiplicador = idade * 2;
        resultadoLogico = 1;
    } else {
printf("%s\n", "Acesso negado ou condicoes desfavoraveis.")        multiplicador = idade / 2;
        resultadoLogico = 0;
    }
    if (resultadoLogico == 1 || !(idade < 10)) {
printf("%s\n", "Condicao secundaria complexa verdadeira!")    } else {
printf("%s\n", "Condicao secundaria complexa falsa!")    }
printf("%s\n", "Multiplicador atual: ")printf("%s\n", multiplicador)printf("%s\n", "Taxa de Juros: ")printf("%s\n", taxaJuros)    switch (categoria) {
    case 'A':
printf("%s\n", "Categoria A selecionada.")        multiplicador = multiplicador + 10;
        break;
    case 'B':
printf("%s\n", "Categoria B selecionada.")        multiplicador = multiplicador - 5;
        break;
    case 'C':
printf("%s\n", "Categoria C selecionada.")        multiplicador = multiplicador + 0;
        break;
    case valorReferencia:
printf("%s\n", "Caso por valor de referencia!")        break;
    }
printf("%s\n", "Fim da demonstracao de Comandos Condicionais.")    return 0;
}
