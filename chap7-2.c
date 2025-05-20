#include <stdio.h>
#include <ctype.h>

int main(){
    char str[] = "hello world";
    char *p, *q;

    p = &str[0];
    *p = toupper(str[0]);
    q = &str[6];
    *q = toupper(str[6]);

    printf("%s", str);

    return 0;
}