#include <stdio.h>

int main(){
    int x,y;
    printf("xの値：");
    scanf_s("%d",&x);
    printf("yの値：");
    scanf_s("%d",&y);
    if (x>y)
    {
        printf("xはyより大きい");
    }
    else if (x<y)
    {
        printf("xはyより小さい");
    }
    else
    {
        printf("xとyは等しい");
    }
}