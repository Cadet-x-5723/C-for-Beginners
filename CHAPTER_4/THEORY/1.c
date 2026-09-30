// Basic while loop statements

#include <stdio.h>

int main()
{

    int i = 0;
    while (i < 4)
    {
        printf("HI !!\n");
        i += 1;
    }
    return 0;
    /* runs 4 interations, because:
    initially,
        i=0
    and after each time running the loop,
    the value changes by addition of one.
    ( i+=1 or simply as i = i+1)

    here, i+=1 or i = i+1 can be simply written as,
     i++ (known as increment operator, we'll learn about it in further chapters)
    therefore case 1:
                i<0. # 1st interation
              case 2:
                i=1 => i>4 # 2nd interation
              case 3:
                i=2 => i>4 # 3rd interation
              case 4:
                i=3 => #4th interation

    thereafter, i=4 => not less than 4,
            as per the condition


    */
}