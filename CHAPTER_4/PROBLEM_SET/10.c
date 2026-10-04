/*
Write a program to implement "program-5",
using do-while loop.

program-5:
Write a program to sum first ten natural numbers using while loop

*/
#include<stdio.h>

int main(){

    int i=1;
    int sum=0;
    do{
        sum+=i;
        i++;
    }while(i<=10);
    printf("The sum fo first 10 natural nos. is : %d",sum);
    return 0;
}