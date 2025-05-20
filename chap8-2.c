#include <stdio.h>

int main(){
    int listofNum[10];
    int length = sizeof(listofNum) / sizeof(listofNum[0]);

    for (int i = 0; i < length; i++){
        printf("%d番目の数値を入力：", i+1);
        scanf_s("%d", &listofNum[i]);
    }

    printf("入力した数値列>> ");
    for (int i = 0; i < length; i++){
        printf("%d ", listofNum[i]);
    }
    
    printf("\n");

    printf("逆転した数値列>> ");
    for (int i = length; i >= 0; i++){
        printf("%d ", listofNum[i]);
    }
}