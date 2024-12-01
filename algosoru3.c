#include <stdio.h>
int main(){
    int notlar[10];
    float toplam;
    for(int i = 0; i<10;i++){
        printf("%d . notu giriniz. ",i);
        scanf("%d",notlar[i]);
        toplam = toplam + notlar[i];
    }
    float ort = toplam/10;
    for(int i=0 ; i<10;i--){
        if (notlar[i]>ort){
            printf("%d",notlar[i]);
        }
        else{
            continue;
        }
    }

    return 0 ; 
}

