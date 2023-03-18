#include <stdio.h>
int i, fact;
int faktoriyel(int);


int main ()
{
    printf("Faktoriyelini hesaplamak istediğiniz sayıyı giriniz: ");
    scanf("%i",&i);
    printf("Girdiğiniz %i sayısının faktoriyeli %i olur\n\n",i,faktoriyel(i));
}
faktoriyel(i)
{
    if (i == 0 || i == 1)
    {
        fact = 1;
        return fact;
    }
    else
    {
        fact = i*faktoriyel(i-1);
        return fact;
    }

}