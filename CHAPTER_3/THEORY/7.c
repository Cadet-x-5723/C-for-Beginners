// switch statements

#include<stdio.h>

int main(){

    int a;
    printf("enter a no. : ");
    scanf("%d", &a);

    switch(a){

        case 1:
        printf(" you entered 1 \n");
        break;

        case 2:
        printf(" you entered 2 \n");
        break;

        default:
        printf(" nothing matched \n");
        break;        

    }
    return 0;
}

/*
POSSIBLE PRACTICLE EXAMPLE:

#include<stdio.h>

int main(){

    int a;
    printf("enter your rollno. : ");
    scanf("%d", &a);

    switch(a){

        case 5723:
        printf(" that's 5723 \n");
        break;

        default:
        printf(" that's not sreeaansh bhardwaj \n");
        break;        

    }
    return 0;
}

*/