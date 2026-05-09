#include<stdio.h>
void printLine(int n){
    //printf("printLine(%d)\n",n);
    for (int i=1; i<=n; i++){
        printf("*");
    }
    printf("\n");
}
int isEven(int n){
    if (n%2==0){
        return 1;
    }
    else return 0;
}
int main(){
    printLine(1);
    printLine(2);
    printLine(3);
    printLine(4);
    printLine(5);
    for (int i=1; i<=5; i++){
        printLine(i);
    }


    int x = isEven(4);
    printf("%d",x);
    
}