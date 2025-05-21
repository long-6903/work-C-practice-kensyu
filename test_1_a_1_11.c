#include <stdio.h>

int time(int s, int v){
    float t;
    return t = s / v;
}
int main(){
    int kaisu;
    float s, v, t;

    printf("計算回数を入力してください：");
    scanf_s("%d", &kaisu);

    for (int i = 0; i < kaisu; i++)
    {
        printf("距離kmを入力してください：");
        scanf_s("%f", &s);
        printf("平均速度を入力してください：");
        scanf_s("%f", &v);
        
        if (v != 0)
        {
            t = s / v;
            printf("所要時間は %.1f 時間です。\n", t);   
        }
        else{
            printf("０は入力するなよ！\n");
        }
    }
    
    return 0;
}