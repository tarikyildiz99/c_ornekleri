#include <stdio.h>
#include <limits.h>

int maxSayi(int dizi[], int argumanSayisi){
    int minDeger = dizi[0];
    for (int i = 1; i < argumanSayisi; i++)
    {
        if(dizi[i]>minDeger){
            minDeger = dizi[i];
        }
    }
    return minDeger;
}

int main(void){

    short argumanSayisi;
    printf("Kaç tane sayı gireceğinizi belirtiniz: ");
    scanf("%hd",&argumanSayisi);
    printf("%hd\n",argumanSayisi);
    int sayiDizisi[argumanSayisi];
    printf("Dizinizin elemanlarını her bir elemandan sonra enter tuşuna basarak giriniz:\n");
    for (int  i = 0; i < argumanSayisi; i++)
    {
        scanf("%d",&sayiDizisi[i]);
    }
    printf("---------------------\n");
    printf("Dizinizin elemanları:\n");
    printf("---------------------\n");
    for (int  i = 0; i < argumanSayisi; i++)
    {
        printf("%d\t",sayiDizisi[i]);
    }
    printf("\n");
    printf("---------------------\n");
    printf("Dizinizdeki en büyük değer: %d\n",maxSayi(sayiDizisi,argumanSayisi));
    printf("---------------------\n");
}