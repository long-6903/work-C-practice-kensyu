#include <stdio.h>
#include <ctype.h>

int upperCheck(char c){
    if(islower(c)){
        c = toupper(c);
        return c;
    }
    else{
        return c;
    }
}

int main(){
    char c, result;
    
    printf("文字を入力>>");
    scanf_s("%c", &c);

    result = upperCheck(c);

    printf("変換結果: %c", result);

    return 0;
}