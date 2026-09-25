/*
Write a program to find grade of a student given his marks based on below:
Marks Range
        90 – 100  
        ⇒
        A
        80 – 90   
        ⇒
        B
        70 – 80   
        ⇒
        C
        60 – 70   
        ⇒
        D
        50 – 60   
        ⇒
        E
        <50        
        ⇒
        F

*/

#include<stdio.h>

int main(){

    int m;
    printf("Enter the marks: ");
    scanf("%d", &m);

    if (m>=90 && m<=100){
        printf("The grade is A \n");
    }
    else if(m<90 && m>=80){
        printf("The grade is B \n");
    }
    else if(m<80 && m>=70){
        printf("The grade is C \n");
    }
    else if(m<70 && m>=60){
        printf("The grade is D \n");
    }
    else if(m<60 && m>=50){
        printf("The grade is E \n");
    }
    else if(m<50){
        printf("The grade is F \n");
    }

    return 0;
}