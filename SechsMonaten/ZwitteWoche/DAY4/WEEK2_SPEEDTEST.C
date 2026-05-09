#include<stdio.h>

int find_max(int *arr, int size);

int my_strlen(char *s);

int is_vowel(char c);

int digit_sum_again(int n);

int main(void){
    int arr[3] = {1,2,3};
    printf("Maximum value of the array arr[3] is (expected 3): %d\n", find_max(arr,3));
    int arr2[5] = {5,10,15,20,25};
    printf("Maximum value of the array arr[5] is (expected 25): %d\n", find_max(arr2,5));
    int arr3[4] = {2,4,6,8};
    printf("Maximum value of the array arr[4] is (expected 8): %d\n", find_max(arr3,4));

    char *s="huong";
    printf("Length of huong is (expexted 5): %d\n",my_strlen(s));
    char *s1="duc";
    printf("Length of duc is (expexted 3): %d\n",my_strlen(s1));
    char *s2="thao";
    printf("Length of thao is (expexted 4): %d\n",my_strlen(s2));


    char c='a';
    printf("Check if 'a' is an vowel or not (expexted 1): %d\n", is_vowel(c));
    char c1='b';
    printf("Check if 'b' is an vowel or not (expexted 0): %d\n", is_vowel(c1));
    char c2='c';
    printf("Check if 'c' is an vowel or not (expexted 0): %d\n", is_vowel(c2));


    printf("digit_sum_again(0) - expected 0: %d\n",digit_sum_again(0));
    printf("digit_sum_again(7) - expected 7: %d\n",digit_sum_again(7));
    printf("digit_sum_again(123) - expected 6 (1+2+3): %d\n",digit_sum_again(123));

}

int find_max(int *arr, int size){
    int result=arr[0];
    for (int i=1; i<size; i++){
        if (arr[i] > result){
            result = arr [i];
        }
    }
    return result;
}

int my_strlen(char *s){
    int count=0;
    while(*s != '\0'){
        count++;
        s++;
    }
    return count;
}

int is_vowel(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return 1;
    }
    else return 0;
}

int digit_sum_again(int n){
    if (n == 0){
        return 0;
    }
    return (n%10) + digit_sum_again(n/10);
}