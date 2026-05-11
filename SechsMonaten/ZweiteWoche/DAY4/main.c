#include<stdio.h>
#include"math_utils.h"

int main(void){

    /*printf("is_even(0) should return 1: %d\n", is_even(0));
    printf("is_even(1) should return 0: %d\n", is_even(1));
    printf("is_even(2) should return 1: %d\n", is_even(2));
    printf("is_even(3) should return 0: %d\n", is_even(3));
    printf("is_even(100) should return 1: %d\n", is_even(100));
    printf("is_even(-2) should return 1: %d\n", is_even(-2));



    printf("power(2, 0)should return 1: %d\n", power(2 , 0));
    printf("is_prime(1)should return 0 (1 is not prime): %d\n", is_prime(1));
    printf("is_prime(2)should return 1: %d\n", is_prime(2));
    printf("factorial(0) = %d (expected 1)\n", factorial(0));
    printf("factorial(1) = %d (expected 1)\n", factorial(1));
    printf("factorial(3) = %d (expected 6)\n", factorial(3));
    printf("factorial(5) = %d (expected 120)\n", factorial(5));
    printf("factorial(7) = %d (expected 5040)\n", factorial(7));
    //Testfactorial(13) — what does it return? Why is the answer wrong even though the code is correct? Document this in a comment.
    //Because the int cannot hold a huge value like that so it happends to an overflow.
    printf("sum_to(0) returns (expected) 0:%d\n",sum_to(0));
    printf("sum_to(1) returns (expected) 1:%d\n",sum_to(1));
    printf("sum_to(5) returns (expected) 15:%d\n",sum_to(5));
    printf("sum_to(10) returns (expected) 55:%d\n",sum_to(10));
    printf("sum_to(100) returns (expected) 5050:%d\n",sum_to(100));
    printf("fibonacci(0) returns (expected) 0:%d\n",fibonacci(0));
    printf("fibonacci(3) returns (expected) 2:%d\n",fibonacci(3));
    printf("fibonacci(5) returns (expected) 5:%d\n",fibonacci(5));
    printf("fibonacci(10) returns (expected) 55:%d\n",fibonacci(10));
    printf("fibonacci(20) returns (expected) 6765:%d\n",fibonacci(20));
    printf("factorial(-3) returns (expected -1): %d\n", factorial(-3));
    printf("factorial(13) returns (overflow expected): %d\n", factorial(13));
    printf("factorial(20) returns (more overflow): %d\n", factorial(20));
    printf("power(2, -1) returns (expected -1): %d\n", power(2, -1));
    printf("is_prime(0) returns (expected 0): %d\n", is_prime(0));
    printf("is_prime(-5) returns (expected 0): %d\n", is_prime(-5));*/
    printf("power_recursive(2, 0) - expected 1: %d\n",power_recursive(2, 0));
    printf("power_recursive(2, 3) - expected 8: %d\n",power_recursive(2, 3));
    printf("power_recursive(3, 4) - expected 81: %d\n",power_recursive(3, 4));
    printf("power_recursive(5, 0) - expected 1: %d\n",power_recursive(5, 0));
    printf("power_recursive(2, -1) - expected -1: %d\n",power_recursive(2, -1));

    printf("count_digits(0) - expected 1: %d\n",count_digits(0));
    //count_digits(0) - expected 1 (special case — think about why) Because 0 is also a number so its digit must be counted.
    printf("count_digits(7) - expected 1: %d\n",count_digits(7));
    printf("count_digits(99) - expected 2: %d\n",count_digits(99));
    printf(" count_digits(123) - expected 3: %d\n",count_digits(123));
    printf("count_digits(1000) - expected 4: %d\n",count_digits(1000));
    printf("count_digits(9999) - expected 4: %d\n",count_digits(9999));
    printf("count_digits(1000000) - expected 7: %d\n",count_digits(1000000));

    printf("digit_sum(0) - expected 0: %d\n",digit_sum(0));
    printf("digit_sum(7) - expected 7: %d\n",digit_sum(7));
    printf("digit_sum(123) - expected 6 (1+2+3): %d\n",digit_sum(123));
    printf("digit_sum(9999) - expected 36: %d\n",digit_sum(9999));
    printf("digit_sum(1000) - expected 1: %d\n",digit_sum(1000));
    printf("digit_sum(99) - expected 18: %d\n",digit_sum(99));

    return 0;
}

