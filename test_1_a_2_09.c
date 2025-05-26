#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));  // seed with current time

    int ranNum = rand() % 3 + 1;
    int playerNum;

    for (int i = 0; i< 10; i++)
    {
        printf("数値を入力してください：");
        scanf_s("%d", &playerNum);

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