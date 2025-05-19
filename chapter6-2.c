#include <stdio.h>

int average(int a, int b){
    return (a+b)/2;
}

int main(){
    int num1, num2, avg;
    
    printf("数字1を入力：");
    scanf_s("%d", &num1);
    printf("数字1を入力：");
    scanf_s("%d", &num2);
    
    avg = average(num1, num2);

    printf("数字1と数字2の平均値は>> %d", avg);

    return 0;
}