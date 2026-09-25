/*
 Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab Tax
2.5 - 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include<stdio.h>

int main(){

    float i;
    printf("Enter your income(in Lakhs): ");
    scanf("%f", &i);

    if(i<2.5){
        printf("Income tax is not applicable !!");
    }
    else if (i>2.5 && i<=5.0){
        printf("Income tax paid: %.2f", (i*(5.0/100)));
    }
    else if (i>5.0 && i<=10.0){
        printf("Income tax paid: %.2f", (i*(20.0/100)));
    }
    else if (i>10.0){
        printf("Income tax paid: %.2f", (i*(30.0/100)));
    }

    return 0;
}