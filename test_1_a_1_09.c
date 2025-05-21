#include <stdio.h>

int main(){
    float moonWeight, earthWeight;
    
    printf("weight = ");
    scanf_s("%f", &earthWeight);

    moonWeight = (earthWeight * 17) / 100;

    printf("The weight on the surface of the ""moon"" = %.2f Kg", moonWeight);

    return 0;
}