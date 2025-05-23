#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(){
    char str[256];
    
    printf("入力>> ");
    gets(str);

    printf("%d", strlen(str));
    return 0;
}