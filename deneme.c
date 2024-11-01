#include <stdio.h>
int main()


{
    float anne, baba, hedefboy;
    char cins;
    scanf("%f%f%s", &anne, &baba, &cins);
    if (cins=='e'||cins=='E') {
        hedefboy= ((baba+anne)+ 13)/2;
        if(hedefboy<175) {
            printf("turkiye ortalamasindan kısa olacak");
        }
        else {
            printf("turkiye ortalamasindan uzun olacak");
        }
    }
    else if(cins=='k'||cins=='K'){
        hedefboy=((baba+anne)-13)/2;
        if (hedefboy<163) {
            printf("turkiye ortalamasindan kısa olacak");
        }
        else {
            printf("turkiye ortalamasindan uzun olacak");
        }
    }
    else {
        printf("gecerli bir boy giriniz");
    }
    printf("hedef boy = %0.2f",hedefboy);




    return 0;
}
