#include <stdio.h>
#include <ctype.h>

int main(){
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    int size, length = sizeof(str) / sizeof(str[0]);

    printf("サイズを入力>> ");
    scanf_s("%d", &size);
    
    for (int i = 0; i < length; i++)
    {
        printf("%c", str[i]);

        if ((i+1) % size == 0){
            printf("\n");
        }
    }
    
    return 0;
}