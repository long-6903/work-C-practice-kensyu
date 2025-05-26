#include <stdio.h>

int main(){
    char sbinary[17]; // '\o' is a null terminator
    //17 bit = 16bit + '\o'(in order to be able to print the string out as %s, '\o' must be declared)
    int wattaValue, value, i;

    printf("値を入力>> ");
    scanf("%d", &value);

    for (int i = 15; i >= 0; i--) 
    {
        wattaValue = value % 2;
        value /= 2;
    
        sbinary[i] = wattaValue + '0'; /*turn int type number(wattaValue) to char type character(sbinary[i])*/
    }
    
    sbinary[16] = '\0'; // 文字列終端, 直接にfor loopのlimitにしてる
        // 文字列として表示するには、最後に '\0' を追加する必要があります。
        // safe: 17th slot used for string terminator

    for (int i = 0; sbinary[i] != '\0'; i++) // printing out char by char of sbinary string for testing
    //Must set sbinary[16] = '\0'; somewhere before this loop, or else this will go out of bounds and potentially crash
    {
        printf("%c ", sbinary[i]);
    }
    
    printf("\n%s", sbinary); //printing out the whole string at once
    
    return 0;
}