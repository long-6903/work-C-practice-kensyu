#include <stdio.h>

int main(){
    int listofNum[10], sumofArray = 0 /*scanfだと、*/;
    int length = sizeof(listofNum) / sizeof(listofNum[0]);

    while (1)
    {
        for (int i = 0; i < length; i++){
            printf("%d番目の数値を入力：", i+1);
            scanf_s("%d", &listofNum[i]);
            sumofArray += listofNum[i];
        }
    
        printf("偶数>> ");
        for (int i = 0; i < length; i++){
            if (listofNum[i] % 2 == 0){
            printf("%d ", listofNum[i]);
            }
        }
        printf("\n");

        printf("奇数>> ");
        for (int i = 0; i < length; i++){
            if (listofNum[i] % 2 != 0){
            printf("%d ", listofNum[i]);
            }
        }
        printf("\n");

        printf("数値の合計>> %d\n", sumofArray);

        if (sumofArray > 100){
            printf("入力した数値の合計が100超えたので締めます。");
            break;
        }
    }
}