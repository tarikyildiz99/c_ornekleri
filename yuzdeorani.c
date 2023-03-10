/*
1)Kullanıcıya 6 tane sayı girdir
2)O sayıları topla
3)Girilen her bir değer için girilen sayı kümesinin toplamının yüzde
kaçına denk geldiğini hesapla
4)ekrana yazdır
*/
#include<stdio.h>

int main ()
{
    float s1, s2, s3, s4, s5, s6, toplam;

    printf("Aralarında boşul olacak şekilde 6 tane doğal sayı giriniz\n");
    scanf("%f %f %f %f %f %f",&s1,&s2,&s3,&s4,&s5,&s6);
    
    toplam = s1+s2+s3+s4+s5+s6;

    float s1y, s2y, s3y, s4y, s5y, s6y;
    s1y = (s1/toplam)*100;
    s2y = (s2/toplam)*100;
    s3y = (s3/toplam)*100;
    s4y = (s4/toplam)*100;
    s5y = (s5/toplam)*100;
    s6y = (s6/toplam)*100;

    printf("\n");

    printf("%.0f sayısının oranı %f\n",s1, s1y);
    printf("%.0f sayısının oranı %f\n",s2, s2y);
    printf("%.0f sayısının oranı %f\n",s3, s3y);
    printf("%.0f sayısının oranı %f\n",s4, s4y);
    printf("%.0f sayısının oranı %f\n",s5, s5y);
    printf("%.0f sayısının oranı %f\n",s6, s6y);
}