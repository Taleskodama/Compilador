#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
        int contadorWhile;
        int contadorFor;
        int limiteLoop;
    printf("%s\n", "Defina o limite maximo para os loops (ex: 5): ");
    scanf("%d", &limiteLoop);
    printf("%s\n", "Iniciando loop WHILE:");
        contadorWhile = 1;
    while (contadorWhile <= limiteLoop) {
    printf("%s\n", "  WHILE Iteracao: ");
    printf("%d\n", contadorWhile);
        contadorWhile = contadorWhile + 1;
    }
    printf("%s\n", "Loop WHILE finalizado.");
    printf("%s\n", "Iniciando loop FOR:");
    for (    contadorFor = 1; contadorFor < limiteLoop && contadorFor > 0;     contadorFor = contadorFor + 1) {
    if (contadorFor == 3) {
    printf("%s\n", "    Valor e 3.");
    } else {
    printf("%s\n", "    Valor nao e 3.");
    }
        contadorFor = contadorFor * 1;
    }
    printf("%s\n", "Loop FOR finalizado.");
    printf("%s\n", "Fim da demonstracao de Comandos de Repeticao.");
    return 0;
}
