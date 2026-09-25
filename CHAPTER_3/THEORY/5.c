// if - else if - else ladder

#include<stdio.h>

int main(){

    int a;
    printf("enter your age: ");
    scanf("%d",&a);

// the conditional statements go in a flow
//which ever comes to be true first is executed, the rest are ignored
    if (a>=60){
        printf("Enter you are a senior citizen !!");
    }
    // any no. of else-if can be used
    else if (a>18){
        printf("You are an adult");
    }
    else if (a>30){
        printf("go marry!! its already late");
    }
    // the else at the end can be ignored, code will run even without it
    //runs, only when all the statements fails
    else{
        printf("you are a kid !!");
    }  
    return 0;
}