/*
 Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user
*/

#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter the marks of first subject (out of 100): ");
    scanf("%d", &a);
    printf("Enter the marks of second subject (out of 100): ");
    scanf("%d", &b);
    printf("Enter the marks of third subject (out of 100): ");
    scanf("%d", &c);

    float perc1=(a/100.0)*100;
    float perc2=(b/100.0)*100;
    float perc3=(c/100.0)*100;
    float perc=((a+b+c)/300.0)*100;
    printf("The total percentage is %.2f \n", perc);
    printf("The percetage is first subject is:%.2f \n", perc1);
    printf("The percetage is second subject is:%.2f \n", perc2);
    printf("The percetage is third subject is:%.2f \n", perc3);
    

    if(perc1<33 || perc2<33 || perc3<33 ){
        if(perc1<33){
            printf("YOU'VE FAILED DUE TO LESS MARKS IN FIRST SUBJECT !!");
            printf("%.2f %% \n",perc1);
             
        }
        if(perc2<33){
            printf("YOU'VE FAILED DUE TO LESS MARKS IN SECOND SUBJECT !!");
            printf("%.2f %% \n",perc2);
        }
        if(perc3<33){
            printf("YOU'VE FAILED DUE TO LESS MARKS IN THIRD SUBJECT !!");
            printf("%.2f %% \n",perc3);
        }
    }
    else if(perc>=40){
        printf("YOU'VE PASSED !!");
    }
    return 0;
}


//finally !! took a long time adding extra info