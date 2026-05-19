#include<stdio.h>
#include<string.h>
char *my_strncpy(char *dest, const char *scr, int n);

int main(void){
    // Test 1: src="hi", n=5 (exactly n chars, NO null terminator)
    char dest[10];
    memset(dest, 'X', sizeof(dest));  
    const char expected1[] = {'h','i','\0','\0','\0','X','X','X','X','X'};
    my_strncpy(dest, "hi", 5);
    int pass1 = (memcmp(dest, expected1, 10) == 0);
    printf("Test 1: src=\"hi\", n=5 [%s]\n", pass1 ? "PASS" : "FAIL");     

   // Test 2: src="", n=3 (pure padding from empty source)
    memset(dest, 'X', sizeof(dest));
    const char expected2[] = {'\0','\0','\0','X','X','X','X','X','X','X'};
    my_strncpy(dest, "", 3);
    int pass2 = (memcmp(dest, expected2, 10) == 0);
    printf("Test 2: src=\"\", n=3 [%s]\n", pass2 ? "PASS" : "FAIL");

    // Test 3: src="hello", n=5 (exactly n chars, NO null terminator)
    memset(dest, 'X', sizeof(dest));
    const char expected3[] = {'h','e','l','l','o','X','X','X','X','X'};
    my_strncpy(dest, "hello", 5);
    int pass3 = (memcmp(dest, expected3, 10) == 0);
    printf("Test 3: src=\"hello\", n=5 [%s]\n", pass3 ? "PASS" : "FAIL");

    // Test 4: src="hello world", n=5 (src longer than n, truncate, NO null)
    memset(dest, 'X', sizeof(dest));
    const char expected4[] = {'h','e','l','l','o','X','X','X','X','X'};
    my_strncpy(dest, "hello world", 5);
    int pass4 = (memcmp(dest, expected4, 10) == 0);
    printf("Test 4: src=\"hello world\", n=5 [%s]\n", pass4 ? "PASS" : "FAIL");
    printf("%s",dest);

    // Test 5: src="abc", n=0 (n=0 edge case, copy nothing)
    memset(dest, 'X', sizeof(dest));
    const char expected5[] = {'X','X','X','X','X','X','X','X','X','X'};
    my_strncpy(dest, "abc", 0);
    int pass5 = (memcmp(dest, expected5, 10) == 0);
    printf("Test 5: src=\"abc\", n=0 [%s]\n", pass5 ? "PASS" : "FAIL");
   
}

char *my_strncpy(char *dest,const char *scr, int n){
    int i=0;
    while(scr[i] != '\0' && i<n){
        dest[i]=scr[i];
        i++; 
    }
    while (i < n){                 
        dest[i] = '\0';               
        i++;
    }
    return dest;
}
