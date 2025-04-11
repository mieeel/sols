#include <stdio.h>
#include <string.h>

int main()
{
    int h, m, s, t;
    char a[50];
    scanf("%d%d%d", &h, &m, &s);
    getchar();
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0'; // Remove o '\n' do final da string

    if (strcmp(a, "AM") == 0)
    {
        t = (3600 * h) + (60 * m) + s;
        printf("%d\n", t);
    }
    else if (strcmp(a, "PM") == 0)
    {
        t = (3600 * (h + 12)) + (60 * m) + s;
        printf("%d\n", t);
    }

    return 0;
}