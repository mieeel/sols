#include <stdio.h>

int main()
{
    float vet[6], n, med;
    int pos = 0, neg = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &vet[i]);

        if (vet[i] < 0)
        {
            neg = neg + 1;
        }
        else if (vet[i] > 0)
        {
            n = n + vet[i];
            pos = pos + 1;
        }
    }

    med = n / pos;

    printf("%d valores positivos\n", pos);
    printf("%.1f\n", med);

    return 0;
}
