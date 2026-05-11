#include<stdio.h>
int main(){
    int s_max=2147483647;
    s_max+=1;
    printf("Signed overflow: %d\n", s_max);

    unsigned int u_max = 4294967295U;
    u_max += 1;
    printf("Usigned overflow: %u\n", u_max);

    int negative = -1;
    unsigned int as_unsigned = (unsigned int)negative;
    printf("(-1) as unsigned: %u\n", as_unsigned);

    unsigned char tiny=255;
    tiny += 1;
    printf("8-bit unsigned overflow: %u\n", tiny);
    return 0;
}