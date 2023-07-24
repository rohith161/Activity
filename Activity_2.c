#include <stdio.h>

int main() {
    unsigned char count = 0;
    unsigned char p0,p1=0;


    // 4 bit up counter count incremented by 1 if p1.0 = 1 / if p1.1 = 1 then count is reset
     while (1) {
        scanf("%hhu", &p1);
        if ( p1 & 0x01) {
            p0 = count++;
            printf("%d\n", p0);
        }
        else if (p1 & 0x02){
            p0 = count = 0;
            printf("%d\n", p0);
        }

        if (count > 15) {
            p0 = count = 0;
        }

    }

    return 0;
}
