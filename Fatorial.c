#include <stdio.h>

int main() {
    int numero, fatorial = 1;
    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("Fatorial: %d\n", fatorial);
    return 0;
}
