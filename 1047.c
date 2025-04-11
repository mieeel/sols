#include <stdio.h>

int main()
{
    int H1, M1, H2, M2;
    int DURH, DURM;

    scanf("%d %d %d %d", &H1, &M1, &H2, &M2);

    int TM1 = H1 * 60 + M1;
    int TM2 = H2 * 60 + M2;

    if (TM2 <= TM1)
    {
        TM2 += 24 * 60;
    }

    int TOTAL = TM2 - TM1;

    DURH = TOTAL / 60;
    DURM = TOTAL % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", DURH, DURM);

    return 0;
}
