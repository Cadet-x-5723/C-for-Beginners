/*
Write a program to calculate the sum of the numbers occurring in the multiplication
table of 8 (consider 8 × 1 to 8 × 10).
*/

// Using while loop
#include<stdio.h>

int main(){

    int n=1;
    int sum=0;
    while(n<=10){
        int mul=8*n;
        sum+=mul;
        n++;
    }
    printf("The sum is: %d", sum);
    return 0;
}