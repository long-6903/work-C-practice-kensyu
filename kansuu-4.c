#include <stdio.h>

int triangle(int size){
    const char *triangle[5] = {
    "$", 
    "$$",
    "$$$",
    "$$$$",
    "$$$$$"
    }; 

    char text;

    for (int i = 0; i < size; i++){
        text = printf("%s\n", triangle[i]);
    }
    
    return text;
} 


int main(){
    int size;

    printf("nhap size giac >> ");
    scanf("%d", &size);

    printf("%c", triangle(size));

    return 0;
}