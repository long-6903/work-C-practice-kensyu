#include <stdio.h>

int triangle(int size){
    switch (size)
    {
    case 3:
        printf("$\n$$\n$$$");
        break;
    case 4:
        printf("$\n$$\n$$$\n$$$$");
        break;
    case 5:
        printf("$\n$$\n$$$\n$$$\n$$$$\n$$$$$");
        break;
    default:
    printf("");
        break;
    }
}

int main(){
    int size;
    char result;

    printf("サイズを入力：");
    scanf_s("%d", &size);

    result = triangle(size);

    printf("%c", result);

    return 0;
}