#include <stdio.h>


int main() {
    int saat,dakika,saniye,ek,zaman;
    int a,b,a1,b1,c,c1;
    printf("zamani giriniz");
    scanf("%d%d%d",&saat, &dakika, &saniye);
    printf("eklenecek sureyi giriniz");
    scanf("%d",&ek);
    zaman = saat*3600 + dakika*60 + saniye + ek;
    a = zaman/3600;
    c1 = a % 24;
    a1 = zaman%3600;
    c=a1;
    b = a1 / 60 ;
    b1 = c % 60;
    printf("yeni saat: %d : %d : %d",c1,b,b1);

    return 0;
}