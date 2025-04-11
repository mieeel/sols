#include <stdio.h>

int main()
{
    double valor;
    int notas, moedas;

    scanf("%lf", &valor);

    int cents = (int)(valor * 100 + 0.5);

    printf("NOTAS:\n");
    notas = cents / 10000;
    printf("%d nota(s) de R$ 100.00\n", notas);
    cents %= 10000;

    notas = cents / 5000;
    printf("%d nota(s) de R$ 50.00\n", notas);
    cents %= 5000;

    notas = cents / 2000;
    printf("%d nota(s) de R$ 20.00\n", notas);
    cents %= 2000;

    notas = cents / 1000;
    printf("%d nota(s) de R$ 10.00\n", notas);
    cents %= 1000;

    notas = cents / 500;
    printf("%d nota(s) de R$ 5.00\n", notas);
    cents %= 500;

    notas = cents / 200;
    printf("%d nota(s) de R$ 2.00\n", notas);
    cents %= 200;

    printf("MOEDAS:\n");
    moedas = cents / 100;
    printf("%d moeda(s) de R$ 1.00\n", moedas);
    cents %= 100;

    moedas = cents / 50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);
    cents %= 50;

    moedas = cents / 25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    cents %= 25;

    moedas = cents / 10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    cents %= 10;

    moedas = cents / 5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    cents %= 5;

    moedas = cents;
    printf("%d moeda(s) de R$ 0.01\n", moedas);

    return 0;
}
