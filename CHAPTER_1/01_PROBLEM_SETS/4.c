// to calculate the SI

#include<stdio.h>

int main(){

    int t;  // r= rate of interest in %,  t= time in years
    float p,r;    // p= principle amt
    printf("Enter the principle amount:");
    scanf("%f", &p);
    printf("Enter the rate of interest(in percentage):");
    scanf("%f", &r);
    printf("Enter the time (in years):");
    scanf("%d",&t);

    float si=(p*r*t)/100;

    printf("the simple interest is: %.2f", si);

    return 0;


}