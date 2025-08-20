#include <stdio.h>
int main()
{
    int i;
    float f;
    char c;

    printf("Digite um valor inteiro: ");
    scanf("%d", &i); // ler a variável i

    printf("Entre com um numero de ponto flutuante (valor nao inteiro): ");
    scanf("%f", &f); // ler a variável f

    printf("Digite um caractere: ");
    scanf(" %c", &c); // ler a variável c (note o espaço antes de %c)

    printf("%d, %f, %c", i, f, c); // imprimir as variáveis

    return 0;
}
