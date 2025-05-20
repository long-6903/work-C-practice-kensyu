#include <stdio.h>

int main(){
    int length, arrayofNum[10];

    length = sizeof(arrayofNum) / sizeof(arrayofNum[0]);

    for (int i = 0; i < length; i++){
        printf("%d番目の数値を入力：", i+1);
        scanf_s("%d", &arrayofNum[i]);
    }

    printf("入力した数値配列>>");
    for (int i = 0; i < length; i++){
        printf("%d ", arrayofNum[i]);
    }

    printf("2倍かけた数値配列>>");
    for (int i = 0; i < length; i++){
        printf("%d ", arrayofNum[i]*2);
    }

}