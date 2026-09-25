//type casting

#include<stdio.h>

int main(){
    
    int a =25;
    float b=28.25;

    a=(int)b;   // here, the float value of 'b' is changed/typecasted into an integer value

    printf("%d\n", a);
    return 0;
}