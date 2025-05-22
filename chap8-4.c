#include <stdio.h>

int main() {
    int i, num, arraySum = 0;

    while (arraySum < 100 && i < 10) {
        printf("%d番目の数値を入力>> ", i + 1);
        scanf_s("%d", &num);
        arraySum += num;
        i++;
    }

    printf("sum>> %d\n", arraySum);
    return 0;
}
