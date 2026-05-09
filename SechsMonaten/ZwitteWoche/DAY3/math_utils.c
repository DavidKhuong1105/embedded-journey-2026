#define FACTORIAL_MIN 0
#define POWER_MIN_EXP 0
#define ERROR_INVALID_INPUT -1
#define FIBONACCI_MIN 0


int is_even(int n){
    if ( n % 2 == 0 ) {
        return 1;
    }
    else return 0;
}

int power(int base, int exp){
    if ( exp < POWER_MIN_EXP){
            return ERROR_INVALID_INPUT;
    }
    int result = 1;
        for (int i=1; i<= exp; i++){
            result *= base;
        }
    return result;
}

int factorial(int n){
     if (n < FACTORIAL_MIN){
        return ERROR_INVALID_INPUT;
    }
    int result = 1;
        for (int i=n; i>0; i--){
            result*=i;
        }
    return result;
}

int is_prime(int n){
    if (n <= 1){
        return 0;
    }
    int cal=0;
        for (int i=2; i < n; i++){
            if (n % i == 0){
                cal++;
            }
        }
    if (cal > 0){
        return 0;
    }
    else return 1;
}

int sum_to(int n){
    if (n<1){
        return 0;
    }
    else return n+sum_to(n-1);
}

int fibonacci(int n){
    if (n < FIBONACCI_MIN){
        return ERROR_INVALID_INPUT;
    }
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    else return fibonacci(n-1) + fibonacci(n-2);
}

