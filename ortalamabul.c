#include <stdio.h>
int main ()
{
    int girdi;
    float ortalama;
    int toplam = 0;
    int elemanSayi = 0;
    printf("Ortalamasını istediğiniz sayıları giriniz: \n");
//Girilen sayı -1 olunca son kez kod bloğunu çalıştırır ve while döngüsünden çıkar o zamana kadar sürekli tekrarlar
    while(girdi != -1)
    {
        scanf("%i", &girdi);
        toplam += girdi;
        elemanSayi++;
        
    }
//girilen son sayı -1 i de toplayıp sayacağı için toplamı 1 arttırmalı ve eleman sayımızı 1 azaltmalıyız
    toplam++;
    elemanSayi--;
//Ortalama her zaman bir tam sayı olamayacağında tip çevrimi yapılır
    ortalama= (float)(toplam)/(float)(elemanSayi);
    
    printf("Elemansayısı: %i\nToplam: %i\nOrtalama: %f\n",elemanSayi,toplam, ortalama);
    
}