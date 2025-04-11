#include <stdio.h>

int main()
{
    int p, g;
    scanf("%d%d", &p, &g);
    printf("%.20g", (double)((double)p / g));

    return 0;
}