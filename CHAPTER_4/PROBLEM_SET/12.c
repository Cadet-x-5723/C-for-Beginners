/*
Write a program to calculate the sum of the numbers occurring in the multiplication
table of 8 (consider 8 × 1 to 8 × 10).
*/

// Using for loop
#include<stdio.h>

int main(){
    int i;
    int sum=0;
    for(i=1; i<=10; i++){
        int mul=8*i;
        sum+=mul;
    }
    printf("The sum is: %d", sum);

    return 0;
}