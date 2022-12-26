#include<stdio.h>
#include<stdlib.h>

void isValid(char str[])
{
    int p = 0, e = 0, pm = 0, len;
    int flag = 1, fend = 0;
    for(len = 1; str[len] != '\0'; len++)
    {
        if (str[len] == '.')
            {
                p++;
                if (!(str[len + 1] >= '0' && str[len + 1] <= '9'))
                    flag = 0;
            }
        if (str[len] == 'e' || str[len] == 'E')
            {
                e++;
                if (!(str[len + 1] >= '0' && str[len + 1] <= '9') && str[len + 1] != '+' && str[len + 1] != '-')
                    flag = 0;
            }

        if (str[len] == '+' || str[len] == '-')
        {
            pm++;
            if (str[len - 1] != 'e' && str[len - 1] != 'E')
                flag = 0;
        }

          
            if (str[len - 1] != 'e' && str[len - 1] != 'E' && str[len - 1] != '.'
                && str[len - 1] != '+' && str[len - 1] != '-'
                && !(str[len - 1] >= '0' && str[len - 1] <= '9') && str[len - 1] != 'f')
                    {
                        flag = 0;
                    }

            if(str[len - 1] == 'f')
                fend++;
    }
    if(fend == 1 && str[len - 2] != 'f')
        flag = 0;
    
    else if (fend > 1)
        flag = 0;

    if(p > 1 || e > 1 || pm > 1)
        flag = 0;

    if (flag == 0)
        printf("invalid\n");
    else
        printf("valid\n");
}

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    isValid(str);
}