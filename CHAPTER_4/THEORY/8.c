// Continue statement
// continue - just skips, that particular iteration which satisfies the specified condition.
#include<stdio.h>

int main(){

    // can be used in any loop
    // Let's try it in " for " loop

    int i;
    for(i=1; i<=10; i++){
        if(i==9){
            continue; // skips the interation
            /* result: when the interated value of i reaches 9,(i=9)
            then, that particular interation in the loop is skipped.
            and then it "continues".  
            */
        }
        printf("The value of i is: %d\n", i);
    }
    return 0;
}