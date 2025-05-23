#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define chance = 10;

int main(){
    srand(time(NULL));  // seed with current time

    int ranNum = rand() % 3 + 1;
    int playerNum;

    while (1)
    {
        printf("数値を入力してください：");
        scanf("%d", &playerNum);

        if (playerNum < ranNum){
            printf("もうちょっと上\n");
        }
        else if (playerNum > ranNum){
            printf("もうちょっと下\n");
        }
        else{
            printf("当たった");
            break;
        }
    }
    return 0;
}