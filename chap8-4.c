#include <stdio.h>
#include <ctype.h>

int main(){
    int arrayofNum[10], arrayLen, arraySum;

    arrayLen = sizeof(arrayofNum) / sizeof(arrayofNum[0]);

    while (1)
    {
        for (int i = 0; i < arrayLen; i++)
        {
            printf("%d番目の数値を入力>> ", i+1);
            scanf_s("%d", &arrayofNum[i]);
            arraySum += arrayofNum[i];
        }

        printf("sum>> %d\n", arraySum);
        
        if (arraySum > 100)
        {
            break;
        }
    }
    
}