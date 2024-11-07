#include <stdio.h>
#include <stdlib.h>
int main(){
    int sayi,birler,yeniSayi,i,sonSayi;
    yeniSayi=0;
    sonSayi = 0;
    i = 0;
    printf("iki basamakli bir sayi giriniz. ");
    scanf("%d",&sayi);
    sonSayi = sayi;
    do{
        if((sayi>99) || (sayi<10)){
            printf("lutfen 2 basamakli bir sayi giriniz ");
            scanf("%d",&sayi);
            sonSayi = sayi;
        }
        else{
            
        
            
            birler = sonSayi %10;
            yeniSayi = (sonSayi/10) + (birler*10);
            sonSayi = abs(yeniSayi-sonSayi);
            i++;
        
    }
    }while(sonSayi>9);
    
    printf("cikarma zinciri uzunlugu: %d",i+1);
    return 0;

}