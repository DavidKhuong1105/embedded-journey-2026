#include<stdio.h>


/**
 * @brief Swap the values of two integers via pointers.
 * @param a Pointer to first integer (modified)
 * @param b Pointer to second integer (modified)
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
