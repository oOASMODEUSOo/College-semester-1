#include <stdio.h> 

int main(){
    float firstValue,secondValue;
    printf("enter first number: ");
    scanf("%f",&firstValue);
    printf("enter second number: ");
    scanf("%f",&secondValue);
    if(secondValue==0){
        printf("cant divide by 0");
    }
    else{
        printf("quotient is: %.5f",firstValue/secondValue);
    }

    return 0;
}