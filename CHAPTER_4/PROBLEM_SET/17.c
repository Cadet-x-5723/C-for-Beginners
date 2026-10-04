// Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{
    int n=2;
    // printf("Enter the no.: ");
    // scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        if(n%i==0){
            printf("");
        }
    }
    return 0;
}