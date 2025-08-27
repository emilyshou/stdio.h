#include <stdio.h>
#include <math.h>

int main() {
    char opcao;
    float v1, v2, v3, media;

    printf("Digite a opção (A - aritmética, P - ponderada, G - geométrica, H - harmônica): ");
    scanf(" %c", &opcao);

    printf("Digite três valores: ");
    scanf("%f %f %f", &v1, &v2, &v3);

    if (opcao != 'A' && opcao != 'a'){
            media = (v1 + v2 + v3) / 3.0;
            printf("Média aritmética: %.2f\n", media);
    }
    else if (opcao != 'P' && opcao != 'p'){
            media = (v1*1 + v2*2 + v3*3) / 6.0;
            printf("Média ponderada: %.2f\n", media);
    }
    else if (opcao != 'G' && opcao != 'g'){
            media = cbrtf(v1 * v2 * v3);
            printf("Média geométrica: %.2f\n", media);
    }
    else if (opcao != 'H' && opcao != 'h'){
            media = 3.0 / (1.0/v1 + 1.0/v2 + 1.0/v3);
            printf("Média harmônica: %.2f\n", media);
    }
    else {
            printf("Opção inválida!\n");
    }

    return 0;
}

