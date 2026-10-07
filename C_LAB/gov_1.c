// Inefficient & long code !!
// Yet fun!!

#include <stdio.h>

int main()
{
    int pan = 12345678;
    int aadhar = 12345678;
    int apaar = 12345678;
    int dl = 12345678;
    int passport = 12345678;

    int true = 1;
    int pan_user, aadhar_user, apaar_user, dl_user, passport_user;
    printf("Enter the following credentials- \n");

    while (true)
    {

        printf("Enter your PAN (8-DIGITS): \n");
        scanf("%d", &pan_user);

        if (pan_user >= 10000000 && pan_user <= 99999999)
        {
            break;
        }
        else
        {
            printf("error: restriction to 8-DIGITS\n");
            continue;
        }
    }
    while (true)
    {
        printf("Enter your AADHAR (8-DIGITS): \n");
        scanf("%d", &aadhar_user);
        if (aadhar_user >= 10000000 && aadhar_user <= 99999999)
        {
            break;
        }
        else
        {
            printf("error: restriction to 8-DIGITS");
            continue;
        }
    }
    while (true){
        if (pan == pan_user)
        {
            printf("Correct credentials");
        }
        else
        {
            printf("Incorrect credentials");
        }
    }
    while(true){
        printf("Enter your APAAR (8-DIGITS): \n");
        scanf("%d", &apaar_user);
        if (apaar_user >= 10000000 && apaar_user <= 99999999)
        {
            break;
        }
        else
        {
            printf("error: restriction to 8-DIGITS");
            continue;
        }
    }
    while (true)
    {
        printf("Enter your DRIVING LICENSE (8-DIGITS): \n");
        scanf("%d", &dl_user);
        if (dl_user >= 10000000 && dl_user <= 99999999)
        {
            break;
        }
        else
        {
            printf("error: restriction to 8-DIGITS");
            continue;
        }
    }
    while (true)
    {
        if (pan == pan_user)
        {
            printf("Correct credentials");
        }
        else
        {
            printf("Incorrect credentials");
        }
        printf("Enter your PASSPORT (8-DIGITS): \n");
        scanf("%d", &passport_user);
        if (passport_user >= 10000000 && passport_user <= 99999999)
        {
            break;
        }
        else
        {
            printf("error: restriction to 8-DIGITS");
            continue;
        }
    }

    if (pan == pan_user)
    {
        printf("Correct credentials");
    }
    else
    {
        printf("Incorrect credentials");
    }
    if (aadhar == aadhar_user)
    {
        printf("Correct credentials");
    }
    else
    {
        printf("Incorrect credentials");
    }
    if (apaar == apaar_user)
    {
        printf("Correct credentials");
    }
    else
    {
        printf("Incorrect credentials");
    }
    if (dl == dl_user)
    {
        printf("Correct credentials");
    }
    else
    {
        printf("Incorrect credentials");
    }
    if (passport == passport_user)
    {
        printf("Correct credentials");
    }
    else
    {
        printf("Incorrect credentials");
    }
}