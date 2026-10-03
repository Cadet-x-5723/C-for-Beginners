// Do-While loop

// will run atleast once
// First runs the code then checks the statement

#include <stdio.h>

int main(){

    int i=0;
    do
    {
        printf("The value of i is: %d\n",i);
        i++;
    } while(i<4);
    return 0;
}
/* And if the while condition would have been false,
then also first the code will print the statement defined and
then check for the condition and terminate.
*/ 