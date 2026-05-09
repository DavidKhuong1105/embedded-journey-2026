#include<stdio.h>
void ex1(){
    for (int i=1; i<11; i++){
        printf("%d\n",i);
    }
}
void ex2(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for (int i=1; i<=n;i++){
        sum+=i;
    }
    printf("%d", sum);
}
void ex3(){
    for (int i=1; i<21; i++){
        if (i%2==0){
            printf("%d ",i);
        }
    }
}
int main(){
    ex1();
    //ex2();
    //ex3();
}