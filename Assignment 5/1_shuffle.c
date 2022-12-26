#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int getStringSize(char str[])
{
    int size;
    for (size = 0; str[size] != '\0'; size++);
    return size;
}

unsigned int rando()
{
    int i, n, d;
    unsigned int r = 0;
    for(i = 0; i < 32; i++)
    {
        n = clock();
        d = n & 1;
        r = r + d * (1 << i);
    }
    if (r > 0)
        return r;
    else
        return -r;
}


void stringConcatenate(char str1[], char str2[], char con[])
{
    int i, j;

    for(i = 0; str1[i] != '\0'; i++)
        con[i] = str1[i];
    for (j = 0; str2[j] != '\0'; i++, j++)
        con[i] = str2[j];
    con[i] = '\0';

}

int shuffleString(char st1[], char st2[] ,char str[])
{
    stringConcatenate(st1, st2, str);
    
    int len = getStringSize(str);
    for (int i = 0; i < len; i++)
    {
        int rIndex = (rando() % len);
        int temp = str[i];
        str[i] = str[rIndex];
        str[rIndex] = temp;
    }

}

int main()
{
    char str1[100] = "ABCDEFG";
    char str2[100] = "HIJKLMNOP";
    char con[200];
   shuffleString(str1, str2, con);
    printf("%s", con);
}