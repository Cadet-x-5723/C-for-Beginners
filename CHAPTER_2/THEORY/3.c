// operators...assosiativity and presedence

#include<stdio.h>

int main(){

    int a=2;
    int b=3;
    int c=6;
    int d=a*b/c*c*b/a+b+c/b*a+b;

    /* 
    this the order of solving such problem
        d=a*b/c*c*b/a+b+c/b*a+b
        d=2*3/6*6*3/2+3+6/3*2+3
        d=6/6*6*3/2+3+6/3*2+3
        d=1*6*3/2+3+6/3*2+3
        d=6*3/2+3+6/3*2+3
        d=18/2+3+6/3*2+3
        d=9+3+6/3*2+3
        d=9+3+2*2+3
        d=9+3+4+3
        d=19
    */
    
    printf("the value of d is %d", d);
    return 0;
}

/* the priority order of operators:
1st - * / % 
2nd - + -
3rd - =
(Valid in the absense of parenthesis, if it's there then what's inside it should be solved first)
*/