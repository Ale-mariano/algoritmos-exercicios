#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a, b, c, menor;


    printf("Digite o primeiro valor: ");
    scanf("%d",&a);

    printf("Digite o segundo valor: ");
    scanf("%d",&b);

    printf("Digite o terceiro valor: ");
    scanf("%d",&c);

    if (a < b && a < c)
    {
        menor = a;

    }
    else if(b < c)
    {
        menor = b;

    }
    else
    {
        menor = c;

    }
    printf("MENOR = %d\n", menor);

    return 0;
}
