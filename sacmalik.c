#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    for(int i = 0;i<3;i++){
    if (a<=b && a<=c){
        printf("%d\t",a);
        a += b + c;
    }
    else if (b<=a && b<=c){
        printf("%d\t",b);
        b += a+c;
    }
    else{
        printf("%d\t",c);
        c += a+b;
    }
    }
    return 0;
}