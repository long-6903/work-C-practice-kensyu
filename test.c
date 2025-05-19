#include <stdio.h>

int test(int size){
    for (int i = 0; i < size; i++)
    {
        for (int y = 0; y <= i; y++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int size;
    char result;

    printf("サイズを入力：");
    scanf_s("%d", &size);

    result = test(size);

    printf("%c", result);

    return 0;
}