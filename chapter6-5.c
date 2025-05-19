#include <stdio.h>

int hyou(int num){
    for (int i = 1; i < 10; i++)
    {
        int s = num*i;
        printf("%d ", s);
    }
}
int main(){
    int dan;

    printf("何段？>>");
    scanf_s("%d", &dan);

    hyou(dan);

    return 0;
}