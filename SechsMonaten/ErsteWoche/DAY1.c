#include<stdio.h>
void ex1(){
    int a=10;
    float b= 3.14f;
    char c= 'K';
    printf("a = %d, b = %f, c = %c",a,b,c);
}
void ex2(){
    int a; 
    int b;
    printf("Input value for a: ");
    scanf("%d", &a);
    printf("Input value for b: ");
    scanf("%d", &b);
    printf("Sum = %d\n",a+b);
    printf("Difference = %d\n",a-b);
    printf("Product = %d",a*b);
}
void ex3(){
    int a=2147483646;
    a+=1;
    printf("%d",a);
}
int main(){
    ex1();
    ex2();
    ex3();
}