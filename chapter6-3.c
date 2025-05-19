#include <stdio.h>

int compare(int a, int b){
   if (a > b){
    return a;
   }
   else{
    return b;
   }
}

int main(){
    int n1, n2, n3, maxValue1, maxValue2;

    printf("数字1を入力：");
    scanf_s("%d", n1);
    printf("数字1を入力：");
    scanf_s("%d", n2);    
    printf("数字1を入力：");
    scanf_s("%d", n3);


    maxValue1 = compare(n1, n2);
    maxValue2 = compare(maxValue1, n3);

    printf("%d, %dと%dの比較した結果は%d", n1, n2, n3, maxValue2);

    return 0;
}