#include<stdio.h>
#include<stdlib.h>

void passValidation(char pass[])
{
    int i;
    int digit = 0, upper = 0, lower = 0, symbol = 0, flag = 1;

    for(i = 0; pass[i] != '\0'; i++)
    {
        if (pass[i] >= '0' && pass[i] <= '9')
            digit++;

        else if (pass[i] >= 'A' && pass[i] <= 'Z')
            upper++;

        else if (pass[i] >= 'a' && pass[i] <= 'z')
            lower++;
        else
        {
            symbol++;
            if(!(pass[i + 1] >= '0' && pass[i + 1] <= '0') && !(pass[i + 1] >= 'A' && pass[i + 1] <= 'Z') && !(pass[i + 1] >= 'a' && pass[i + 1] <= 'z') && pass[i + 1] != '\0')
                flag = 0;
        }
    }

    if (lower < 2 || upper < 2 || digit < 2 || symbol < 2 || i < 10)
        flag = 0;
    if (flag)
        printf("%s is a valid password\n", pass);
    else
        printf("%s is an invalid password\n", pass);
}

int main()
{
    char pass[100] = "hello";
    printf("Enter pass: ");
    fgets(pass, 100, stdin);
    passValidation(pass);
}