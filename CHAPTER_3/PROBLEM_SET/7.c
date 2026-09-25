// Write a program to determine whether a character entered by the user is lowercase or not

#include<stdio.h>

int main(){

    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("the character is: %c\n", ch);
    printf("the ASCII value of character is: %d\n", ch); 
    // just by using the format specifier of integer for a character,
    // we can get the ASCII of that character.
    // lowercase characters: 97 - 122
    if(ch>=97 && ch<=122){
        printf("It's a lowercase character");
    }
    else{
        printf("It's a not lowercase character");
    }
    return 0;
}