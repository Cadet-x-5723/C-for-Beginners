// to convert celcius to farenite

#include<stdio.h>

int main(){

    float c,fa;   // declaration of the celcius variable 'c' and 'f'
    
    printf("enter the celcius temp. :");
    scanf("%f", &c);
    fa = ((9.0/5.0)*c) + 32;   // formula for the conversion of the celcius to farhenite
    printf("the temp. in farenite scale is %f", fa);

}

/*
 NOTE: i was making this error, the code :

    printf("enter the celcius temp. :");
    fa = ((9.0/5.0)*c) + 32;   // formula for the conversion of the celcius to farhenite
    scanf("%f", &c);
    printf("the temp. in farenite scale is %f", fa);

as c works in a flow of running code, 
    and i had given the formula "fa" even before having the
    inputs to evaluate it, so this code gave a wrong output.

therefore:
    the formula should be given to initialise after values are taken as input.
    
*/