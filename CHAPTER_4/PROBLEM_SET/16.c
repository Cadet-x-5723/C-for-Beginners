// Write a program to calculate the factorial of a given number using a do-while loop

#include<stdio.h>

int main(){

    int fact;
    printf("enter the factorial: ");
    scanf("%d",&fact);
    int n=fact-1;

    do{
        fact*=n;
        n--;
    }while(n>0);

    printf("%d",fact);
    return 0;
}