#include <stdio.h>

void binaryConversion(unsigned char n){
    for(int i=7; i>=0; i--){
        printf("%d ", (n & ) & 1);
    }
}

int main(){
    // 7 segment code for the Common Anode
    unsigned char p0[] = {0x81,0xcf,0x92,0x86,0xcc,0xa4,0xa0,0x8f,0x80,0x8c};
    unsigned char p1;
    scanf("%hhd", &p1);

    if((p1 & 0x01) == 0){
        printf("dp a b c d e f g\n");
        for(int i=0; i<10; i++){
            printf(" ");
            binaryConversion(p0[i]);
            printf(" --->  %x\n",i);
        }
    }
    return 0;
}