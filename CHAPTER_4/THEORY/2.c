// infinite loop

// Basic while loop statements

#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 4)
    {
        printf("HI !!\n");
        // incrementation statement: missing!!
    }
    return 0;
    /*
    it runs infinitely because,
    the condition in the while loop never satisfies.
    As, in the while block the value of " i " is not incremented.
    */
}

/* Or to give an another example for the condition in a while loop

    while(2<10){
        printf("HI !!\n");
    }
 this also prints infinitely, because the condition 2<10 is universally true.
*/