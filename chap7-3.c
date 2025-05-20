#include <stdio.h>
#include <ctype.h>

int main(){
    int num[10];

    for (int i = 0; i < 10; i++){
        printf("%d個目の数字を入力>> ", i+1);
        scanf_s("%d", &num[i]);
    }

    printf("入力した数値列：");
    for (int i = 0; i < 10; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
    
    printf("逆転した数値列：");
    for (int y = 9 ; y >= 0; y--)
    {
        printf("%d ", num[y]);
    }    
}