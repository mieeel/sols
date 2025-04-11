#include <stdio.h>

int main()
{
    int n, t, soma = 0, i;
    scanf("%d", &n);
    while (i != n) // MUITO LEGAL USAR ISSO NO LUGAR DE "FOR"
    {
        scanf("%d", &t);
        soma = soma + (3 * t);
        i = i + 1;
    }
    printf("%d", soma);

    return 0;
}