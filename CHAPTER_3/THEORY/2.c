// if-if statements

#include<stdio.h>

int main(){
    
    float a;
    printf("Enter your age:");
    scanf("%f", &a);

    if (a>18) {
        printf("Adult !!!");
    }
    
    if (a==18){
        printf("Your are 18y old !!");
    }

    if (a<18){
        printf("you are a kid !!");
    }
    return 0;
}
