#include <stdio.h>
#include <ctype.h>

int main(){
    int mytoupper(char);
    int ischar(char);
    char c = getchar();
    printf("%d", ischar(c));
    printf("%c",mytoupper(c));
    return 0;
}

int mytoupper(char c){
    if (c>='a' || c <='z'){
        return c - 'a' + 'A';
    }
}

int ischar(char x){
    if (x >='A' || x<='Z' || x <='z'|| x >='a'){
        return 1;
    }
    else{
        return 0;
    }
    

}