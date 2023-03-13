#include <stdio.h>
int main()
{
    unsigned long girdi;
    int bolen = 1;
    int i = 0;
    printf("Bir sayı giriniz: ");
    scanf("%lu",&girdi);

    while(bolen<(girdi-1))// girdi - 1 olmasının sebebi bolen girdi-1 e ulaştıktan sonraki değeri de while döngüsü
    //içerisinde kullanıp sonra çıkacaktı ama biz girdi değerini 1 azaltınca deneyeceği son değer girdi -1 oluyor
    //bu sayade girdinin kendisine bölünme ihtimalini elemiş oluyoruz
    {
        // Döngünün başında a 1 arttırılıp 2 yapılıyor çünkü her sayı 1 e bölünebilir
        bolen++;
        // Girilen sayının herhangi bir sayıya bölümünden kalanı 0 a eşitse bölündüğü sayıyı da yazdırıp
        //asal olmadığı belirtiliyor
        if(girdi%bolen==0)
        {
            //b değişkeni true false değeri gibi kullanılıyor. İstenilen durum sağlandığında 1 veriyor
            i = 1;
            printf("%lu sayısı %i sayısına tam bölünüyor bu yüzden ",girdi,bolen);
            //Tam bölünen bir sayı çıktığında döngüden çıkmak için break kullanılıyor
            break;
        }
    }

    if (i == 0)
    {
        printf("%lu sayısı asaldır\n", girdi);
    }
    else
    {
        printf("%lu sayısı asal değildir\n",girdi);
    }
}