/*
 Write a program to find whether a year entered by the user is a leap year or not. Take
year as an input from the user
*/

#include<stdio.h>

int main(){

    int y;
    printf("Enter year: ");
    scanf("%d", &y);

    if(y%4==0){
        printf("Leap year !!");
    }
    else if(y%100==0){
        if(y%400==0){
            printf("Leap year !!");
        }
    }
    else{
        printf("Not a leap year !!");
    }

    return 0;
}

// finally got the right logic!! took a lot of time
