#include<stdio.h>


/**
 * @brief Swap the values of two integers via pointers.
 * @param a Pointer to first integer (modified)
 * @param b Pointer to second integer (modified)
 */
void swap(int *a, int *b);


int main(void){
    int a, b, pass;

    a = 5; b = 10;
    swap(&a, &b);
    pass = (a == 10 && b == 5);
    printf("Test 1: swap(5,10) -> a=%d b=%d [%s]\n", a, b, pass ? "PASS" : "FAIL");

    a = -3; b = 7;
    swap(&a, &b);
    pass = (a == 7 && b == -3);
    printf("Test 2: swap(-3,7) -> a=%d b=%d [%s]\n", a, b, pass ? "PASS" : "FAIL");

    a = 0; b = 0;
    swap(&a, &b);
    pass = (a == 0 && b == 0);
    printf("Test 3: swap(0,0) -> a=%d b=%d [%s]\n", a, b, pass ? "PASS" : "FAIL");
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
