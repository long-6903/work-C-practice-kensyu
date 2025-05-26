#include <stdio.h>

int compare(int a, int b){
    if (a < b)
    {
        return a;
    }
}

int main(){
    int num[5], min1 = 0 , min2, min3, min4;

    for (int i = 0; i < 5; i++)
    {
        printf("data[%d]：", i);
        scanf("%d", &num[i]);

        min1 = compare(num[1], num[2]);
        min2 = compare(min1, num[3]);
        min3 = compare(min2, num[4]);
        min4 = compare(min3, num[5]); 
        *(num + i) = min1;
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}