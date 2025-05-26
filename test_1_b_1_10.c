#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[256], *count = str, keyword;
    int len = 0;

    printf("文字列を入力：");
    gets(str);

    len = strlen(str);

    printf("探索する文字を入力してください：");
    scanf("%c", &keyword);

    for (int i = 0; i < len; i++)
    {
        if (*(count + i) == keyword){
            printf("Aの%d個目は、%d文字目です。\n" , i, i+1);
        }
        else{
            break;
        }
    }

    return 0;
}