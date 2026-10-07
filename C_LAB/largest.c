#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("enter first no: \n");
    scanf("%d", &n1);
    printf("enter second no: \n");
    scanf("%d", &n2);
    printf("enter third no: \n");
    scanf("%d", &n3);

    while (1)
    {
        if (n1 > n2 && n1 > n3)
        {
            printf("%d is greatest \n", n1);
            break;
        }
        else if (n2 > n3 && n2 > n1)
        {
            printf("%d is greatest \n", n2);
            break;
        }
        else if (n3 > n1 && n3 > n2)
        {
            printf("%d is greatest \n", n3);
            break;
        }
    }
 
    while (1)
    {
        if (n1 < n2 && n1 < n3)
        {
            printf("%d is smallest \n", n1);
            break;
        }
        else if (n2 < n3 && n2 < n1)
        {
            printf("%d is smallest \n", n2);
            break;
        }
        else if (n3 < n1 && n3 < n2)
        {
            printf("%d is smallest \n", n3);
            break;
        }
    }
}