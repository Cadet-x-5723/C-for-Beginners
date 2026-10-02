// Break statement
// break - directly exits the loop, when encountered the specified condition.

#include<stdio.h>

int main(){

    // can be used in any loop
    // Let's try it in " for " loop

    int i;
    for(i=1; i<=10; i++){
        if(i==9){
            break; // Exits the loop
        }
        printf("The value of i is: %d\n", i);
    }
    return 0;
}