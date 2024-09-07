#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;
    printf("Digite quatro notas: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7)
        printf("Aprovado com média %.2f\n", media);
    else
        printf("Reprovado com média %.2f\n", media);

    return 0;
}
