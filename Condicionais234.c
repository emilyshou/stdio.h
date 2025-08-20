#include <stdio.h>

int main() {
    float base, altura, perimetro, area;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    perimetro = 2 * base + 2 * altura;
    area = base * altura;

    if (perimetro > area) {
        printf("O perímetro é maior que a área\n");
    } else if (area > perimetro) { 
        printf("A área é maior que o perímetro\n");
    } else { 
        printf("O perímetro e a área são iguais.\n");
    }

    return 0;
}