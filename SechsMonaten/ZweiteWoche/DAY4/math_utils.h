#ifndef MATH_UTILS_H
#define MATH_UTILS_H

/**
    * @brief check if the input value is an even number or not.
    * @param n Input value (n must be a positive input value).
    * @return 1 if n is even, 0 if n is odd.
    */
int is_even(int n);

/**
    * @brief Computes base^exp.
    * @param exp Input value (must be 0 ≤ exp).
    * @return base^exp if valid, -1 if exp is negative.
    */
int power(int base, int exp);


/**
    * @brief Computes n! (factorial) iteratively.
    * @param n Input value (must be 0 ≤ n ≤ 12 to avoid int overflow).
    * @return n! if valid, -1 if n is negative.
    */
int factorial(int n);



/**
    * @brief evaluate n is a prime num or not.
    * @param n Input value (must be > 0).
    * @return 1 if n is a prime value, 0 if n is not.
    */
int is_prime(int n);



/**
    * @brief Computes the sum of integers from 1 to n.
    * @param n Input value (n must be >= 0).
    * @return Sum of integers from 1 to n.
    */
int sum_to(int n);


/**
    * @brief Computes the nth Fibonacci number.
    * @param n Input value (n must >= 0).
    * @return The nth Fibonacci number.
    */
int fibonacci(int n);

/**
    * @brief Computes base^exp.
    * @param exp Input value (must be 0 ≤ exp).
    * @return base^exp if valid. 
    */ 
int power_recursive(int base, int exp);

/**
    * @brief Computes base^exp.
    * @param n Input value (must be 0 ≤ n).
    * @return number digits of n if valid. 
    */ 
int count_digits(int n);

/**
    * @brief Computes base^exp.
    * @param n Input value (must be 0 ≤ exp).
    * @return sum of all digit of the input. 
    */ 
int digit_sum(int n);

#endif
