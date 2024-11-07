#include <stdio.h>

int main(void) {
    int i,j;
    int hedef= 20;
    int bolen;
    for(i=0;i<=hedef;i++) {
        bolen = 0;
        for(j=1;j<=i;j++) {
            if(i%j==0) {
                bolen++;
            }

        }
        if(bolen==2) {
            printf("%d\n",i);
        }
    }
    return 0;
}
