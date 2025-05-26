#include <stdio.h>

int compare(int a, int b){
    if (a < b){
        return a;
    }
}

int main(){
    int num[5], sum = 0, min1, min2, min3, min4;
    float avg;

    printf("値を入力してください。\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d番目：", i+1);
        scanf("%d", &num[i]);

        sum += num[i]; 
        avg = sum / (i+1);
    }

    min1 = compare(num[1], num[2]);
    min2 = compare(min1, num[3]);
    min3 = compare(min2, num[4]);
    min4 = compare(min3, num[5]); 
    
    printf("合計値：%d\n", sum);
    printf("最小値：%d\n", min4);
    printf("平均値：%0.1f\n", avg);
    
    return 0;
}