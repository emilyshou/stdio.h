#include <stdio.h>
int main()
{
    char c;
    int i;
    float f;

    printf("Digite um caractere: ");
    scanf(" %c", &c); // ler a variável c

    printf("Digite um valor inteiro: ");
    scanf("%d", &i); // ler a variável i

    printf("Entre com um numero de ponto flutuante (valor nao inteiro): ");
    scanf("%f", &f); // ler a variável f

    printf("%c, %d, %f", c, i, f); // imprimir as variáveis

    return 0;
}
