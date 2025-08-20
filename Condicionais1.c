#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int alunos, monitores;
    scanf("%d %d", &alunos, &monitores);

    if (alunos + monitores <= 50) {
        printf("É possível levar todos os alunos e
monitores em apenas uma viagem\n");
    } else {
        printf("Não é possível levar todos os alunos e
monitores em apenas uma viagem\n");
    }

    return 0;
}
