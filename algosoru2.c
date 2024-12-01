#include <stdio.h>
int sayi1,sayi2;
int main(){
    int obeb(int,int);
    printf("iki sayi giriniz");
    scanf("%d%d",sayi1,sayi2);
    printf("%d",obeb);
    return 0;
}

int obeb(int a,int b){
    int kalan = a%b;
    if (kalan==0){
        return b;
    }
    else{
        
        obeb(b,kalan);
    }
}


//bitmedi.