// operational operators
// 1 - True
// 0 - False

#include<stdio.h>

int main(){

    int a=0;
    int b=1;

    printf("the value of a and b is %d \n", a&&b);
    printf("the value of a or b is %d \n", a||b);
    printf("the value of a not is %d \n", !a);
    
    // practical usage

    if(a){  // if(a) is true then runs for if(b)
        if(b){   // if(b) is true then prints
            printf("Both are true \n");
        }
    }
    else{    // if(a) is false
        printf("this is false !! \n");
    }
    

    //

    if (a&&b){   // can resolve nested loops logic
        printf("this is also true\n");
    }
    else{
        printf("this is also false \n");
    }
    return 0;
}
