#include <stdio.h>
#include <unistd.h>

int main() {
    unsigned char count = 0;
    unsigned char p0;

   // 4 bit up counter count incremented by 1 for every 1 seconds
   while(1){
    if(count > 15){
        count = 0;
    }
    p0 = count++;
    printf("%d\n",p0);
    sleep(1);
   }

    return 0;
}
