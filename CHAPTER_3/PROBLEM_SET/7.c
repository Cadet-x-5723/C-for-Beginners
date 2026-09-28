// Write a program to find greatest of four numbers entered by the user

#include<stdio.h>

int main(){

    int a,b,c,d;
    printf("Enter the first no.: ");
    scanf("%d", &a);
    printf("Enter the second no.: ");
    scanf("%d", &b);
    printf("Enter the third no.: ");
    scanf("%d", &c);
    printf("Enter the fourth no.: ");
    scanf("%d", &d);

    // && - T + T = T (BOTH ARE TRUE THEN - TRUE)
    // ! - T = F OR F = T (OPPOSITE)
    // || - T + F = T (ATLEAST ONE TO BE TRUE - TRUE)

    if(a>b && a>c && a>d){
        printf("%d is greatest",a);    
    }
    else if(b>a && b>c && b>d){
        printf("%d is greatest",b);  
    }
    else if(c>a && c>b && c>d){
        printf("%d is greatest",c);
    }
    else if(d>a && d>b && d>c){
        printf("%d is greatest",d);
    }
    return 0;
}