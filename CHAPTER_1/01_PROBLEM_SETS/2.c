// Area of a circle and volume of a cylinder in the same code

#include<stdio.h>

int main(){

    float r1; // radius
    printf("Enter the radius of the circle, for the area of the circle: \n");
    scanf("%f", &r1);
    float c_area=3.14*r1*r1;
    printf(" The area of the circle is: %f \n", c_area);

    float r2, h;
    printf("Enter the radius of the cylinder: \n");
    scanf("%f", &r2);

    printf("Enter the height of the cylinder:  \n");
    scanf("%f", &h);
    float vol=3.14*r2*r2*h;
    
    printf("The volume of the cylinder is : %f \n", vol);

    return 0;
}