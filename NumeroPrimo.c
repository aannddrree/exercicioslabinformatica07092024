#include <stdio.h>

int main() {
    int numero, primo = 1;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        primo = 0;
    } else {
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo)
        printf("O número %d é primo.\n", numero);
    else
        printf("O número %d não é primo.\n", numero);

    return 0;
}
