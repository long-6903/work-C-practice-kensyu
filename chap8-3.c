#include <stdio.h>

int main(){
    int listofNum[10];
    int length = sizeof(listofNum) / sizeof(listofNum[0]);

    for (int i = 0; i < length; i++){
        printf("%d番目の数値を入力：", i+1);
        scanf_s("%d", &listofNum[i]);
    }
    
    printf("偶数>> ");
    for (int i = 0; i < length; i++)
    {
        if (listofNum[i] % 2 == 0){
            printf("%d ", listofNum[i]);
        }
    }

    printf("\n");

    printf("奇数>> ");
    for (int i = 0; i < length; i++)
    {
        if (listofNum[i] % 2 != 0){
            printf("%d ", listofNum[i]);
        }
    }


    
}