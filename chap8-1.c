#include <stdio.h>

int main(){
    int length, listofNum[10];

    length = sizeof(listofNum) / sizeof(listofNum[0]);

    for (int i = 0; i < length; i++){
        printf("%d番目の数値を入力：", i+1);
        scanf_s("%d", &listofNum[i]);
    }

    printf("入力した数値配列>>");
    for (int i = 0; i < length; i++){
        printf("%d ", listofNum[i]);
    }

    printf("2倍かけた数値配列>>");
    for (int i = 0; i < length; i++){
        printf("%d ", listofNum[i]*2);
    }

}