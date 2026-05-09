#include<stdio.h>

int factorial_recursive(int n);

int main(void){
    printf("factorial_recursive(0) = %d (expected 1)\n", factorial_recursive(0));
    printf("factorial_recursive(1) = %d (expected 1)\n", factorial_recursive(1));
    printf("factorial_recursive(3) = %d (expected 6)\n", factorial_recursive(3));
    printf("factorial_recursive(5) = %d (expected 120)\n", factorial_recursive(5));
    printf("factorial_recursive(7) = %d (expected 5040)\n", factorial_recursive(7));
}

int factorial_recursive(int n){
    if (n<0){
        return -1;
    }
    if (n==0){
        return 1;
    }
    return n * factorial_recursive(n-1);
}