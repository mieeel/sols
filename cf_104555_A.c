#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, H, A, Num = 0, i = 0;
    scanf("%d%d", &N, &H);

    while (i != N)
    {
        scanf("%d", &A);
        if (H >= A)
        {
            Num = Num + 1;
        }
        i = i + 1;
    }
    printf("%d\n", Num);

    return 0;
}
