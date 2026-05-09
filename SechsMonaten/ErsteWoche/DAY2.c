#include<stdio.h>
void ex1(){
    int a;
    int b;
    printf("Input value for a: ");
    scanf("%d",&a);
    printf("Input value for b: ");
    scanf("%d",&b);
    if (a>b){
        printf("a is larger");
    }
    else if (a<b){
        printf("b is larger");
    }
    else {
        printf("equal");
    }
}
void ex2(){
    int n;
    printf("Input value for n: ");
    scanf("%d",&n);
    if (n % 2 == 0){
        printf("Even");
    }
    else {
        printf ("Odd");
    }
}
void ex3(){
    int n;
    printf("Input value for n: ");
    scanf("%d",&n);
    if (n>0){
        printf("Positive");
    }
    else if (n<0){
        printf("Negative");
    }
    else {
        printf("Zero");
    }
}
int main(){
    ex1();
    ex2();
    ex3();
}