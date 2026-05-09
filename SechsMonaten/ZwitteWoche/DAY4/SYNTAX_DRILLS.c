#include<stdio.h>


void arr_index(int *arr, int size);
int find_max_ptr(int *arr, int size);
int my_strcmp(char *a, char *b);
int count_vowels(char *s);
void reverse_string(char *s);


int main(void){
    int arr[5]={10, 20, 30, 40, 50};
    int size1 = 5;
    arr_index(arr,size1);


    int arr2[6]={3, 7, 2, 9, 4, 1};
    int size2 = 6;
    printf("Test with {3, 7, 2, 9, 4, 1} - expect 9: %d\n",find_max_ptr(arr2,size2));

    char *a="hello";
    char *b="hello";
    printf("my_strcmp('hello', 'hello') -> 0: %d\n",my_strcmp(a, b));
    char *a1="abc";
    char *b1="abcd";
    printf("my_strcmp('abc', 'abcd') -> 1: %d\n",my_strcmp(a1, b1));
    char *a2="hello";
    char *b2="world";
    printf("my_strcmp('hello', 'world') -> 1: %d\n",my_strcmp(a2, b2));


    char *s1="hello";
    printf("Test: 'hello' -> 2 (e, o): %d\n",count_vowels(s1));
    char *s2="rhythm";
    printf("Test: 'rhythm' -> 0: %d\n",count_vowels(s2));
    char *s3="education";
    printf("Test: 'education' -> 5: %d\n",count_vowels(s3));

    char s4[]="hello";
    reverse_string(s4);
    printf("'hello' -> 'olleh': %s\n", s4);
    char s5[]="abc";
    reverse_string(s5);
    printf("'abc' -> 'cba': %s", s5);


    // Drill 2 edge cases:
int arr_descend[5] = {50, 40, 30, 20, 10};
printf("descending → expected 50: %d\n", find_max_ptr(arr_descend, 5));
int arr_one[1] = {42};
printf("single element → expected 42: %d\n", find_max_ptr(arr_one, 1));

// CRITICAL — verify original is not modified:
int arr_check[3] = {7, 3, 5};
find_max_ptr(arr_check, 3);
printf("arr[0] should still be 7: %d\n", arr_check[0]);

// Drill 3 edge cases:
printf("empty vs empty → expected 0: %d\n", my_strcmp("", ""));
printf("empty vs 'a' → expected 1: %d\n", my_strcmp("", "a"));
printf("'a' vs 'a' → expected 0: %d\n", my_strcmp("a", "a"));

// Drill 5 edge cases:
char short_str[] = "ab";
reverse_string(short_str);
printf("'ab' reversed → expected 'ba': %s\n", short_str);

char one_char[] = "x";
reverse_string(one_char);
printf("'x' reversed → expected 'x': %s\n", one_char);
}



// Drill 1: Loop through array, print each element with its index
//   int arr[5] = {10, 20, 30, 40, 50};
//   Expected output:
//     arr[0] = 10
//     arr[1] = 20
//     arr[2] = 30
//     arr[3] = 40
//     arr[4] = 50


void arr_index(int *arr, int size){
    int *p=arr;
    for (int i=0; i<size; i++){
        printf("arr[%d] = %d\n",i,*p);
        p++;
    }
}







// Drill 2: Find max in array using POINTER ARITHMETIC ONLY
//   int find_max_ptr(int *arr, int size)
    //   - Use *p, p++ — DO NOT use arr[i] notation
    //   - Initialize max with first element
//   - Test with {3, 7, 2, 9, 4, 1} — expect 9

int find_max_ptr(int *arr, int size){
    int max=arr[0];
    int *p=arr+1;
    for (int i=0; i < size-1; i++){
        if (*p > max){
            max=*p;
        }
        p++;
    }
    return max;
}

// Drill 3: my_strcmp — compare two strings character by character
//   int my_strcmp(char *a, char *b)
//   - Return 0 if equal, 1 if different
//   - Loop until either ends
//   - Test cases:
//     my_strcmp("hello", "hello") -> 0
//     my_strcmp("hello", "world") -> 1
//     my_strcmp("abc", "abcd") -> 1


int my_strcmp(char *a, char *b){
    while (*a != '\0' || *b != '\0' ){
        if (*a != *b){
            return 1;
        }
        a++;
        b++;
    }
    return 0;
}


// Drill 4: count_vowels in a string using is_vowel from before
//   int count_vowels(char *s)
//   - Loop through string, count vowels
//   - Test: "hello" -> 2 (e, o), "rhythm" -> 0, "education" -> 5


int count_vowels(char *s){
    int count=0;
    char *p=s;
    while (*p != '\0'){
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'u' || *p == 'o' ){
            count++;
        }
        p++;
    }
    return count;
}

// Drill 5: Reverse a string IN PLACE (modify the original)
//   void reverse_string(char *s)
//   - Two pointers: one at start, one at end (use my_strlen)
//   - Swap *start and *end, advance start, retreat end
//   - Stop when they meet
//   - Test: "hello" -> "olleh", "abc" -> "cba"




void reverse_string(char *s){
    int count = 0;
    char *p = s;
    while (*p != '\0'){
        count++;
        p++;
    }
    char *start = s;
    char *end = s + count - 1;
    while (start < end){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}