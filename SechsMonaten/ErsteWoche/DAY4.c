#include<stdio.h>
void ex1(){
    for (int i=3; i<=30; i++){
        if (i%3==0){
            printf("%d ",i);
        }
    }
}
/*void ex1(){
    for (int i=3; i<=30; i+=3){
        printf("%d ",i);
    }
}*/
void ex2(){
    int n;
    scanf("%d",&n);
    int count=0;
    for (int i=1; i<=n; i++){
        if (i%2==0){
            count++;
        }
    }
    printf("%d",  count);
}
/*void ex3(){
    for (int i=1; i<=5; i++){
        for (int j=4; j>=0; j--){
            if (i-j>0){
            printf("*");
            }
        }
        printf("\n");
    }
}*/
void ex3(){
    for (int i=1; i<=5; i++){
        for (int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    //ex1();
    //ex2();
    ex3();
}