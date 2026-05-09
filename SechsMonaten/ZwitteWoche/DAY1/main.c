#include<stdio.h>
#include "math_utils.h"

int main(){
    
    int x = factorial(3);
    int y = power(2 , 0);
    int z = is_prime(1);
    int t = is_prime(2);
    printf("factorial(3) returns: %d\n",x);
    printf("power(2 , 0) returns: %d\n",y);
    printf("is_prime(1) return: %d\n",z);
    printf("is_prime(2) returns: %d\n",t);
    int a = gcd(12, 18);
    printf("gcd(12 , 18) returns : %d\n",a);
    int b = gcd(7, 13);
    printf("gcd(7 , 13) returns : %d\n",b);
    int c = gcd(100, 75);
    printf("gcd(100 , 75) returns : %d\n",c);
    printf("factorial(0) = %d (expected 1)\n", factorial(0));
    printf("factorial(1) = %d (expected 1)\n", factorial(1));
    printf("factorial(3) = %d (expected 6)\n", factorial(3));
    printf("factorial(5) = %d (expected 120)\n", factorial(5));
    printf("factorial(7) = %d (expected 5040)\n", factorial(7));
}

