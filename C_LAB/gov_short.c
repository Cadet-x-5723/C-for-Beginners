#include <stdio.h>
int main()
{
    int pan = 12345678, aadhar = 12345678, apaar = 12345678, dl = 12345678, passport = 12345678;
    int pan_user, aadhar_user, apaar_user, dl_user, passport_user;
    int opt;
    printf("-------------------------------Choose the credential to verify-------------------------------\n");
    printf(" 1. PAN\n 2. AADHAR\n 3. APAAR\n 4. DRIVING LICENSE\n 5. PASSPORT \n\n");
    while (1)
    {
        printf("Enter your choice:");
        scanf("%d", &opt);
        if (opt > 0 && opt <= 5)
        {
            break;
        }
        else
        {
            printf("Incorrect option !!\n\n");
            continue;
        }
    }
    while (1)
    {
        if (opt == 1)
        {
            printf("Enter your PAN: \n");
            scanf("%d", &pan_user);
            if (pan == pan_user)
            {
                printf("Credential verified !!\n");
                break;
            }
            else
            {
                printf("Credential not verified !!\n");
                break;
            }
        }
        if (opt == 2)
        {
            printf("Enter your AADHAR: \n");
            scanf("%d", &aadhar_user);
            if (aadhar == aadhar_user)
            {
                printf("Credential verified !!\n");
                break;
            }
            else
            {
                printf("Credential not verified !!\n");
                break;
            }
        }
        if (opt == 3)
        {
            printf("Enter your APAAR: \n");
            scanf("%d", &apaar_user);
            if (apaar == apaar_user)
            {
                printf("Credential verified !!\n");
                break;
            }
            else
            {
                printf("Credential not verified !!\n");
                break;
            }
        }
        if (opt == 4)
        {
            printf("Enter your DRIVING LICENSE: \n");
            scanf("%d", &dl_user);
            if (dl == dl_user)
            {
                printf("Credential verified !!\n");
                break;
            }
            else
            {
                printf("Credential not verified !!\n");
                break;
            }
        }
        if (opt == 5)
        {
            printf("Enter your PASSPORT: \n");
            scanf("%d", &passport_user);
            if (passport == passport_user)
            {
                printf("Credential verified !!\n");
                break;
            }
            else
            {
                printf("Credential not verified !!\n");
                break;
            }
        }
    }
}