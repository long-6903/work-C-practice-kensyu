#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[256], keyword;
    int i, count = 0, len = 0;

    printf("文字列を入力：");
    gets(str);

    len = strlen(str);

    printf("探索する文字を入力してください：");
    scanf("%c", &keyword);

    for (int i = 0; i < len; i++){
        if (str[i] == keyword)
        {
            count++;
            printf("%cの%d個目は、%d文字目です\n", keyword, count, i+1);
        }
    }

    return 0;
}