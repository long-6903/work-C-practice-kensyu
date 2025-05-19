#include <stdio.h>

int main(){

    int day,time;
    printf("曜日を入力：");
    scanf_s("%d",&day);
        printf("時間帯を入力：");
        scanf_s("%d",&time);
        switch (time)
        {
        case 0:
            if (day==2 || day ==5){
                printf("休診");
            }
            else{
                printf("営業");
            }
            break;
        case 1:
            if (day==6){
                printf("休診");
            }
            else{
                printf("営業");
            }
            break;
        case 2:
            if (day==3 || day ==6){
                printf("休診");
            }
            else{
                printf("営業");
            }
            break;
        default: printf("対象外時間帯");
            break;
        }
    return 0;
}