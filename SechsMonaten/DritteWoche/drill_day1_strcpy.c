#include<stdio.h>

char *my_strcpy(char *dest,const char *scr);



int main(void){
char dest[16];
printf("Test N: src= 'hello' -> dest= 'hello' [PASS/FAIL]: %s",my_strcpy(dest, "hello"));
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