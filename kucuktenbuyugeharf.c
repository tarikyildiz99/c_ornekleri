//Kullanıcıdan aldığı küçük harfi büyük yapacak program
//Türkçe karakterleri yapamaz sadece ASCII tablosundaki harfler için
#include<stdio.h>

int main()
{

    char kHarf;

    printf("Bir küçük harf giriniz: ");
    scanf("%c",&kHarf);

    int bHarf = (int)(kHarf)- 32;
    char buyukHarf = (char)(bHarf);

    printf("Girdiğiniz %c harfinin büyük hali: %c\n",kHarf, buyukHarf);
}