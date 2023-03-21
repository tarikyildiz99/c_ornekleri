#include <stdio.h>

int main()
{
    int dizi[5];
    int a = 0, b = 0, c = 0, d = 0;
    printf("5 tane dizi elemanı giriniz ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &dizi[i]);
    }

    for (int i = 0; i < 5; i++)
    {

        if (dizi[i] % 2 == 1)
            a++;
        else
            b++;
    }
    int tekdizi[a];
    int ciftdizi[b];
    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] % 2 == 1)
        {
            tekdizi[c] = dizi[i];
            c++;
        }
        else
        {
            ciftdizi[d] = dizi[i];
            d++;
        }
    }
    printf("Girdiğiniz dizinin tek elemanları:\n");
    for (int i = 0; i < a; i++)
    {
        printf("%i\t", tekdizi[i]);
    }
    printf("\n");

    printf("Girdiğiniz dizinin çift elemanları:\n");

    for (int i = 0; i < b; i++)
    {
        printf("%i\t", ciftdizi[i]);
    }
    printf("\n");
}