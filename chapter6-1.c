#include <stdio.h>

int square(int a){
    return a*a;
}

int main(){
    int num, result;

    printf("数字を入力>>　");
    scanf_s("%d", &num);

    result = square(num);

    printf("%dの二乗は%d", num, result);

    return 0;
}