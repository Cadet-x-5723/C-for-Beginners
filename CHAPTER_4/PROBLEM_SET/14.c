// Write a program to calculate the factorial of a given number using a for loop

#include<stdio.h>

int main(){
    int fact;
    printf("enter the factorial: ");
    scanf("%d",&fact);
    int n;
    for(n=fact-1; n>0; n--){
        fact*=n;
    }
    printf("%d",fact);
    return 0;
}