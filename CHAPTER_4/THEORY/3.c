// Incrementation
// understanding the difference between ++i and i++

#include <stdio.h>

int main()
{

    int i = 5;
    printf(" the value of i is: %d\n", i); // simply prints the value of i
    
    printf(" the value of i is: %d\n", ++i);
    /* Now, the value printed will be 6...but how ? let's understand:

    we should know that " ++ " is an incerment operator which increments,
    by default "only by 1" ....but the position of this operator is what creates difference

    ++i ==> the incerment operator comes first,
    therefore first the value is incremented then printed.

    i++ ==> the incerment operator comes after the decleared variable,
    therefore first the value of i(Declared variable) will be printed and then incremented.
    the value incremente will be not shownas the i is already printed but it's incremented for the next use.

    So, yeah !! It all depends where the ++ is placed
    */
    printf(" the value of i is: %d\n", i++); // prints the value as 6, but has been incremented to 7

    printf(" the value of i is: %d\n", i+=2); // 9

    /* As we know that,
    " ++ " is an incerment operator which increments, by default "only by 1"
    so, if we need the incrementation to be more than 1 then,

    we use " Compound assignment operator" (i.e +=, -=, *=, /=):
    i+=2, i+=10
    */

    return 0;
}