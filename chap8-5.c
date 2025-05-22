#include <stdio.h>

int main(){
    int value, wattaValue, binary[16];
    int len = sizeof(binary) / sizeof(binary[0]);

    printf("数値を入力>> ");
    scanf_s("%d", &value);

    while (1)
    {
        for (int i = len - 1 ; i >= 0; i--)
        {
            binary[i] = value % 2;
            value /= 2;
        }
        
        for (int i = 0; i < len; i++)
        {
            printf("%d", binary[i]);
        }
        

        if (value == 0)
        {
            break;
        }
    }
    
    return 0;
}