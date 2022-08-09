#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char Nome1[50], Nome2[50];
    int idade1, idade2;
    double idadeMedia;

    printf("Dados da primeira pessoa\n");
    printf("Nome: ");
    gets(Nome1);
    printf("idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa\n");
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END); //Comando para limpar quebra de linha
    gets(Nome2);
    printf("dade: ");
    scanf("%d", &idade2);

    idadeMedia = (double)(idade1 + idade2)/2;
                 printf("A idade media de %s e %s é de %.1lf anos ", Nome1, Nome2, idadeMedia);

                 return 0;
}
