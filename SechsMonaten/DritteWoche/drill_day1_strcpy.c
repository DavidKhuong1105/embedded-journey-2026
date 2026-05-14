#include<stdio.h>
#include <string.h>

char *my_strcpy(char *dest,const char *scr);



int main(void){
    char dest1[16];
    char dest2[16];
    char dest3[16];
    char dest4[16];

    const char *expected1 = "hello";
    my_strcpy(dest1, "hello");
    int pass1 = (strcmp(dest1, expected1) == 0);
    printf("Test 1: src=\"hello\" expected=\"hello\" got=\"%s\" [%s]\n",dest1, pass1 ? "PASS" : "FAIL");

    const char *expected2 = "";
    my_strcpy(dest2, "");
    int pass2 = (strcmp(dest2, expected2) == 0);
    printf("Test 2: src=\"\" expected=\"\" got=\"%s\" [%s]\n",dest2, pass2 ? "PASS" : "FAIL");

    const char *expected3 = "a";
    my_strcpy(dest3, "a");
    int pass3 = (strcmp(dest3, expected3) == 0);
    printf("Test 3: src=\"a\" expected=\"a\" got=\"%s\" [%s]\n",dest3, pass3 ? "PASS" : "FAIL");

    const char *expected4 = "Khuong";
    my_strcpy(dest4, "Khuong");
    int pass4 = (strcmp(dest4, expected4) == 0);
    printf("Test 4: src=\"Khuong\" expected=\"Khuong\" got=\"%s\" [%s]\n",dest4, pass4 ? "PASS" : "FAIL");

}

char *my_strcpy(char *dest,const char *scr){
    char *start_dest = dest;
    while (*scr != '\0'){
        *dest = *scr;
        dest++;
        scr++;
    }
    *dest='\0';
    
    return start_dest;
}

/*char *char(char *dest, const char *arr){
    int i=0;
    while(arr[i] != '\0'){
        dest[i]=arr[i];
        i++;
    }
    dest[i];
    return dest;
}*/