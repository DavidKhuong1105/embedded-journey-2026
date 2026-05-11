int is_even(int n){
    if (n % 2 == 0){
        return 1;
    }
    else return 0;
}

int is_prime(int n){
    if (n == 1){
        return 0;
    }
    else{
        int sum = 0;
        for (int i=2; i < n; i++){
            if(n % i == 0){
                sum+=1;
            }
        }
        if (sum >= 1){
            return 0;
        }
        else return 1;
    }
}
int factorial(int n){
    int result=1;
    if (n >= 1){
        for (int i=n; i > 0; i--){
            result*=i;
        }
    }
    return result;
}

int power(int base, int exp){
    int result=1;
    if(exp >= 1){
        for (int i=exp; i > 0; i--){
            result *= base;
        }
    }
    return result;
}

int gcd(int a, int b){
    while(a!=0){
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;

}