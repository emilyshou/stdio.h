#include <studio.h>
#include <math.h>
int main()
{
    int x, y;
    printf("Digite dois numeros inteiros que correspondem às coordenadas do ponto (x, y) de contato da bola com o solo, em polegadas: ");
    scanf("%d %d", &x, &y);
    if (x>=0 && x<=432 && y>=0 && y<=468)
        printf("d/n");
    else
        printf("f/n");
    return 0;
}