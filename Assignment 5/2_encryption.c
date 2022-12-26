#include<stdio.h>

void encrypt(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
        string[i] = (string[i] + 23) % 256;
}

void decrypt(char string[])
{
     for (int i = 0; string[i] != '\0'; i++)
        string[i] = (string[i] - 23) % 256;
}

int main()
{
    char string[] = "Hello. I Hate Cornflakes.";
    encrypt(string);
    printf("%s", string);
    printf("\n");
    decrypt(string);
    printf("%s", string);
    printf("\n");

}