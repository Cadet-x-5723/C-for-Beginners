#include<stdio.h>

int main(){

    int a=11;

    if(a=10){
        printf("i am 11");
    }
    else{
        printf("i am not 11");
    }

    return 0;
}

// OUTPUT : i am 11 ???
// (a=11) is a non-integer value in 'if' condition, so it runs.