#include <stdio.h>

int main(){
    char userInput[256];
    int countTab = 0, countEnter = 0, countMark = 0, length;
    
    length =  sizeof(userInput) / sizeof(userInput[0]);

    while (1)
    {
        printf("文字列を入力>> ");
        gets(userInput);
        
        for (int i = 0; i < length; i++)
        {
            switch (userInput[i])
            {
            case '  ':
                countTab += 1;
                break;
            case '\n':
                countEnter += 1;
                break;
            case '@':
                countMark += 1;
                break;
            default:
                break;
            }
            if (userInput[i] = 'q')
            {
                break;
            }
            
        }
        
        
    }
    
}