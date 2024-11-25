#include <stdio.h>

int main(){
    int araba=1;
    int max = 0;
    int count = 0;
    while(araba != 0){
        printf("\nGiren arabanin modelini giriniz");
        scanf("%d",&araba);
        if (!((araba<10000) && (araba>999))){
            printf("\n4 haneli bir sayi giriniz.");
            continue;
        }
        if(max<araba){
            max = araba;
        }
        if (max==araba){
            count++;
        }
    }
    printf("\nen yeni model : %d , bu modelden giren araba sayisi: %d",max,count);
    return 0;
}