#include <studio.h>
#include <math.h>

int main() {
    float A, B, C;

    printf("Digite os três valores equivalentes aos lados do triângulo: ");
    scanf("%f %f %f", &A, &B, &C);

    if (A < B + C && B < A + C && C < A + B) {
        if (A == B && B == C) {
            printf("Triângulo equilátero\n");
        } else if (A == B || A == C || B == C) {
            printf("Triângulo isósceles\n");
        } else {
            printf("Triângulo escaleno\n");
        }
    } else {
        printf("Os valores não formam um triângulo\n");
    }

    return 0;
}