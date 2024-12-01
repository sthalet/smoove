#include <stdio.h>
int main(){
    float en_buyuk(float, float, float);   
    float en_kucuk(float, float, float);
    float a,b,c;
    printf("uc sayi ondalikli giriniz.  ");
    scanf ("%f%f%f",&a, &b,&c);    //bir scanf fonksiyonunda 3 sayı aldım. ayrı ayrı da yazılabilir.
    printf("en buyuk sayi : %.4f\n",en_buyuk(a,b,c));
    printf("en kucuk sayi : %.4f",en_kucuk(a,b,c));
    return 0;

}

float en_buyuk(float a ,float b, float c){    //tek tek sayıları karşılaştırarak en büyük sayıyı bulur.
    if (a>b && a>c){
        return a;
    }
    else if(b>c && b>a){                     
        return b;
    }
    else{
        return c;
    }
}

float en_kucuk(float a, float b, float c){  //tek tek karşılaştırarak en küçük sayıyı bulur.
    if (a<b && a<c){
        return a;
    }
    else if(b<c && b<a){
        return b;
    }
    else{
        return c;
    }
}