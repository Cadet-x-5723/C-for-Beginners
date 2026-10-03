/*
Q. A do while loop is executed:

a. At least once.
b. At least twice.
c. At most once.
*/

// Preface- In do-while loop, first the statement is printed then checked
// Example:
#include<stdio.h>

int main(){

    int i,n;
    i=10;
    do{
        printf("Hello C!!");
    }
    while(i<5); // false
    return 0;
} // but still prints the statement once