#include <stdio.h>

int main(){
    int i = 0, listofNum[10], sumofArray = 0 /*scanfだと、初期化されない*/;
    int length = sizeof(listofNum) / sizeof(listofNum[0]);

    while (i < 9 && sumofArray <100)
    {
        for (i = 0; i < length; i++){
            printf("%d番目の数値を入力：", i+1);
            scanf("%d", &listofNum[i]);
            sumofArray += listofNum[i];

        if (sumofArray >= 100){
            printf("合計が100以上になったので、結果を出して処理を止めます。\n");
            }
        else if (i == 9){
            printf("入力回数が10になったので、結果を出して処理を止めます。\n");
            }
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
        
    }

    return 0;
}