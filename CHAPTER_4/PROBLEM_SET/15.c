// Write a program to calculate the factorial of a given number using a while loop

#include<stdio.h>

int main(){
    int fact;
    printf("enter the factorial: ");
    scanf("%d",&fact);
    int n=fact-1;
    while(n>0){
        fact=fact*n;
        n--;
    }
    printf("%d",fact);
    return 0;
}