#include <stdio.h>

int main(){
    int a = 0x12345678;
    short b;
    b = a;
    printf("%x\n",a);
    printf("%x",b);
    return 0 ;
}