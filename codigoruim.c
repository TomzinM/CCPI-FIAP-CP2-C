#include "stdio.h"

int main() {
    float nota1, nota2, media;  // estava sem ;, que faz essa linha e a proxima ser lido como uma, causando erro.

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);         // ANTES: apenas "nota2" não salvaria o scanf, então foi adicionado & para isso.

    media = nota1 + nota2 / 2;

    if (media >= 6) {            // "media = 6" não faz nada ja que não é sinal de comparação, então foi mudado para >=
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}