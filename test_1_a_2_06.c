#include <stdio.h>

int main(){
    float roomLength[999], roomWidth[999], S[999], total = 0;
    int roomNum;

    printf("部屋の数を入力してください：");
    scanf_s("%d", &roomNum);

    for (int i = 0; i < roomNum; i++)
    {
        printf("%d部屋の長さを入力してください：", i+1);
        scanf_s("%f", &roomLength[i]);
        printf("%d部屋の長さを入力してください：", i+1);
        scanf_s("%f", &roomWidth[i]);

        S[i] = roomLength[i] * roomWidth[i];
        total += S[i];
    }
    
    printf("総床面積：%f", total);

    return 0;
}