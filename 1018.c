#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0, r = 0, resto = 0;
    scanf("%d", &n);
   
    printf("%d\n", n);
    r = n / 100;
    printf("%d nota(s) de R$ 100,00\n", r);
    resto = n % 100;

    r = resto / 50;
    printf("%d nota(s) de R$ 50,00\n", r);
    resto = resto % 50;

    r = resto / 20;
    printf("%d nota(s) de R$ 20,00\n", r);
    resto = resto % 20;

    r = resto / 10;
    printf("%d nota(s) de R$ 10,00\n", r);
    resto = resto % 10;

    r = resto / 5;
    printf("%d nota(s) de R$ 5,00\n", r);
    resto = resto % 5;

    r = resto / 2;
    printf("%d nota(s) de R$ 2,00\n", r);
    resto = resto % 2;

    r = resto / 1;
    printf("%d nota(s) de R$ 1,00\n", r);

    return 0;
}
