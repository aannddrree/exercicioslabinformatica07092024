#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite três números: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("Maior: %d\n", a);
    else if (b > c)
        printf("Maior: %d\n", b);
    else
        printf("Maior: %d\n", c);

    return 0;
}
