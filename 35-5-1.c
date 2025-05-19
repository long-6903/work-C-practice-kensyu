#include <stdio.h>

int main(void){
    int tensu,num;

    printf("ケース入力>> \n");
    scanf_s("%d",&num);

    printf("点数>> \n");
    scanf_s("%d",&tensu);

    if(tensu>=0 && tensu<=100){
        switch (num){
            case 1:
                if (tensu>60)
                {
                    printf("合格");
                }
                else
                {
                    printf("不合格");
                }
            break;

            case 2:
                if (tensu>80)
                {
                    printf("たいへんよくできました。");
                }
                else if (tensu<60)
                {
                    printf("残念でした。");
                }
                else
                {
                    printf("よくできました。");
                }
            break;

            case 3:
                if (tensu>80){
                    printf("優");
                }
                else if(tensu>70 && tensu<80){
                    printf("良");
                }
                else if (tensu>60 && tensu<70){
                printf("可");
                }
                else{
                printf("不可");
                }
            break;
            default:
                printf("以上");
            break;
        }
    }
    else{
        printf("点数を1から１００");
    }
}