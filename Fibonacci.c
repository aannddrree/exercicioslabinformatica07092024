#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, proximoTermo;

    printf("Digite o número de termos: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci: %d %d ", t1, t2);

    for (int i = 3; i <= n; i++) {
        proximoTermo = t1 + t2;
        printf("%d ", proximoTermo);
        t1 = t2;
        t2 = proximoTermo;
    }

    printf("\n");
    return 0;
}
