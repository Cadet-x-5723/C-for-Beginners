// type conversion

#include<stdio.h>

int main(){

    float a=9.0; //this is float value
    int b=4; //this is int value
    float c=a/b; //this is again float value
    printf("the value of a/b is %f", c);

    /* in type conversion float and int gives float.
    therefore, as we are operating between float and int we should specifiy our output as float.
    or else we'll get wrong output.
     */
}