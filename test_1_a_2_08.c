#include <stdio.h>

int main(){
    int choice;
    float meter, feet, pound, ounce, num, result;

    printf("変換値を入力してください：");
    scanf("%f", &num);

    while (choice != 5)
    {
        printf("変換\n1.フィートからメートルへ\n2.メートルからフィートへ\n3.オンスからポンドへ\n4.ポンドからオンスへ\n5.終了\n番号を選んで入力してください：");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                result = num * (1/3.28);
                printf("フィートからメートルへ変換します：%f\n", result);
            break;

            case 2:
                result = num * 3.28;
                printf("2.メートルからフィートへ：%f\n", result);
            break;

            case 3:
                result = num * 16;
                printf("3.オンスからポンドへ：%f\n", result);
            break;

            case 4:
                result = num * (1/16);
                printf("4.ポンドからオンスへ：%f\n", result);
            break;

            case 5:
                printf("終了。\n");
            break;
            
            default:
                break;
        }
    }
}