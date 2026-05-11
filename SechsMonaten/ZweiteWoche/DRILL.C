#include<stdio.h>


/*
    *@brief swapping two input values from the user
    *@param a and b is integer
    *@result value of a and b swapped 
*/
void swap(int *a, int *b);


int main(void){
    int a;
    printf("Input value for a: \n");
    scanf("%d",&a);
    int b;
    printf("Input value for b: \n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a = %d\n",a);
    printf("b = %d",b);
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
