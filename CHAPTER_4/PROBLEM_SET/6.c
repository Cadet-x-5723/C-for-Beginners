//Write a program to print multiplication table of 10 in reversed order.


#include<stdio.h>

int main(){

    int n;
    printf("Enter the table: ");
    scanf("%d",&n);
    for(int i=10; i>0; i--){
        printf("%d X %d = %d\n", n,i,n*i);
    }
    return 0;
}