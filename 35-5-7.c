#include <stdio.h>

int main(){
    const char *holiday[10]={
            "1.元日、成人の日",
            "2.建国記念日",
            "3.春分の日",
            "4.昭和の日",
            "5.憲法記念日、みどりの日、こどもの日",
            "7.海の日",
            "9.敬老の日、秋分の日",
            "10.体育の日",
            "11.文化の日、勤労感謝の日",
            "12.天皇誕生日"
        };

    int month,choice;

    printf("月を入力>>");
    scanf("%d",&choice);

    printf("tu thang %d se co nhuwng ngay nghi nay:\n",choice);
    int len = sizeof(holiday) / sizeof(holiday[0]); /*tính độ dài mảng = size bit cả mảng / size bit phần tử dầu[0]*/
    if(choice >= 9){
        choice = choice - 2;
    }else if (choice >= 7){
        choice = choice - 1;
    }

    for (int i = choice-1; i < len; i++){
        printf("%s\n",holiday[i]);
    };
    
    return 0;
}