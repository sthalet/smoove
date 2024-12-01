#include <stdio.h>
#include<stdlib.h>
int zincir(int);
int main(){
    
    printf("%d\n",zincir(19));
    printf("%d",zincir(32));
    return 0 ;
}
int zincir(int sayi){
    int birler, yeniSayi, i=0;
    do{
        
            birler = sayi %10;     //sayının birler basamağını bulur.
            yeniSayi = (sayi/10) + (birler*10);  //sayıyı bölüerek onlar basamağını bulur ve birler basamağının 10 katı ile toplayıp sayıyı ters çevirmiş olur. sayıyı 10 a bölerken int data türünün truncate özelliğinden faydalanmış bulunduk.
            sayi = abs(yeniSayi-sayi); //bir sonraki basamak için ters sayı ile düz sayının farkını alır. negatif çıkması durumu için mutlak değeri alınır.
            i++;              //çıkarma zinciri sayacı.
    
    }while(sayi>9);    //sayı 10 dan küçük olduğu sürece döngü devan eder
    return (i + 1) ;
}


