#include<stdio.h>
int imaas=3;
int smaas=0;
int main(){
    int maas(int);
    int gun;
    printf("calistigi gun sayisisni giriniz");
    scanf("%d",&gun);
    printf("%d",maas(gun));
    return 0;
}

int maas(int a){
    smaas = smaas +(imaas * 2) ;
    imaas *=2;
    if (a>1){
        maas(a-1);
    }
    else{
        return smaas;
    }
     
}