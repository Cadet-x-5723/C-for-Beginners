// a number is divisible by 97 or not 

#include<stdio.h>

int main(){
    int a;
    printf("enter a no. for check 5:");
    scanf("%d", &a);
    int d = a%5;
    printf("%d", d);
}

/* i was repeatedly making error while building the logic,
trying to simply operate with float values...forgetting that we get the 
remainder (using moudulus operator) is going to be integer only.

also note that: " % " always operates with integer values only */

