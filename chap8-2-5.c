#include <stdio.h>

int main(){
    char sbinary[17]; //17 bit = 16bit + '\o'
    int wattaValue, value, i;

    printf("値を入力>> ");
    scanf("%d", &value);

    for (int i = 15; i >= 0; i--) 
    {
        wattaValue = value % 2;
        value /= 2;
    
        sbinary[i] = wattaValue + '0'; /*turn int type number(wattaValue) to char type character(sbinary[i])*/
    }
    
    //sbinary[16] = '\0'; // 文字列終端, 直接にfor loopのlimitにしてる
    // 文字列として表示するには、最後に '\0' を追加する必要があります。

    for (int i = 0; sbinary[i] != '\0'; i++) // printing out char by char of sbinary string for testing
    {
        printf("%c ", sbinary[i]);
    }
    
    printf("\n%s", sbinary); //printing out the whole string at once
    
    return 0;
}