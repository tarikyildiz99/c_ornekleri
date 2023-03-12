/*
    Bir kişinin haftada yaptığı mesai saatine göre ücretinin hesaplayan kod
    0-10 saat 5 tlden
    11-20 saat 3 tlden
    20 üstü saat 2 tlden
*/
#include <stdio.h>

int main()
{
    int mesaiUcret, saat;
    printf("Bu hafta kaç saat mesai yaptığınızı giriniz: ");
    scanf("%i",&saat);
    if(saat<=10)
    {
        mesaiUcret = saat * 5;
        printf("Bu hafta mesailerden alacağınız ücret: %d\n", mesaiUcret);
    }
    else if(saat>10 && saat<=20)
    {
        mesaiUcret = 50 + (saat-10)*3;
        printf("Bu hafta mesailerden alacağınız ücret: %d\n", mesaiUcret);
    }
    else
    {
        mesaiUcret = 80 + (saat-20)*2;
        printf("Bu hafta mesailerden alacağınız ücret: %d\n", mesaiUcret);
    }
}