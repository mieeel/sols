#include <stdio.h>

int main()
{
    int n, k, i = 0;
    scanf("%d%d", &n, &k);

    while (i != k)
    {
        if (n % 10 == 0)
        {
            n = (n / 10);
        }
        else
        {
            n = n - 1;
        }
        i = i + 1;
    }
    printf("%d\n", n);

    return 0;
}
