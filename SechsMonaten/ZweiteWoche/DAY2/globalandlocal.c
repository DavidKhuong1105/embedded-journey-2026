#include<stdio.h>

int counter=0; //Global varibale  

void increment_counter(void){
    counter++;
    printf("Inside increment_counter: counter = %d\n", counter);
}

void local_test(void){
    int counter=100; // Local variable - same name as global, "shadows" it
    counter++;
    printf("Inside local test: counter = %d\n", counter);
}

void static_test(void){
    static int call_count=0; // Static local - survies between calls 
    call_count++;
    printf("static_test called %d times\n", call_count);
}

void normal_test(void){
    int call_count=0;
    call_count++;
    printf("normal_test (with regular local): call_count = %d\n", call_count);
}

int main(void){
    increment_counter();
    increment_counter();
    increment_counter();

    local_test();

    printf("In main: counter = %d\n", counter);

    static_test();
    static_test();
    static_test();

    normal_test();
    normal_test();
    normal_test();

    return 0;
}