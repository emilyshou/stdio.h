#include <stdio.h>
#include <math.h>

int main() {
    int n, i;

    printf("Digite um valor inteiro n: ");
    scanf("%d", &n);

    printf("Os valores de 1 a 100 que divididos por n dão resto igual a 2 são:\n");
    for (i = 1; i <= 100; i++) {
        if (i % n == 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}
