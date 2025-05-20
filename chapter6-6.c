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
    char userInput[256];
    int length = sizeof(userInput) / sizeof(userInput[0]);
    
    printf("文字列を入力>> ");
    gets(userInput); //đọc string bao gồm dấu cách/read string including space

    for (int i = 0; i < length; i++){
        userInput[i] = upperCheck(userInput[i]);
    }
    
    printf("変換結果>> %s", userInput);

    return 0;
}