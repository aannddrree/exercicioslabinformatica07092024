#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int inicio, fim, ehPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    fim = strlen(palavra) - 1;

    for (inicio = 0; inicio < fim; inicio++, fim--) {
        if (palavra[inicio] != palavra[fim]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo)
        printf("A palavra %s é um palíndromo.\n", palavra);
    else
        printf("A palavra %s não é um palíndromo.\n", palavra);

    return 0;
}
