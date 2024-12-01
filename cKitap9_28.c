#include <stdio.h>
int main(){
    void bahaneYaz(int);
    bahaneYaz(3);
    return 0;
}

void bahaneYaz(int a){
    switch(a)
    {
    case 1:
        printf("Bu is ingilizlerin basinin altindan cikti!");
        break;
    case 2: 
        printf("Bu is almanlarin basinin altindan cikti!");
        break;
    case 3: 
        printf("Bu is fransizlarin basinin altindan cikti!");
        break;
    default:
        printf("dogru bir girdi yapiniz");
        break;
    }
}