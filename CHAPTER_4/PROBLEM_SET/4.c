// To print the numbers in reverse order

#include<stdio.h>

int main(){

    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(n; n>0; n--){
        printf("%d\n",n);
    }
    return 0;
}