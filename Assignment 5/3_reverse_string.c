#include <stdio.h>
void reverse(char arr[], int n)
{
    //reverses word
    for(int i = 0; i < n/2; i++)
    {
        char temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
 
int main()
{
    char str[100] = "I love you";
    
    int size = 0;
    char buff[100];
    char result[100];
    
    for(size = 0; str[size] != '\0'; size++);
    
    //maintains result array;
    int j = 0;
    //maintains buffer array;
    int k = 0;
    
    for(int i = size; i >= 0; i--, k++)
    {
        if(str[i] == ' ')
        {
            buff[k] = '\0';
            reverse(buff, k);
            for(int s = 0; s < k; s++)
            {
                result[j] = buff[s];
                j++;
            }
            k = 0;
            result[j - 1] = ' ';
            
        }
        else if(i == 0)
        {
            buff[k] = str[i];
            k++;
            buff[k] = '\0';
            reverse(buff, k);
            for(int s = 0; s < k - 1 ; s++)
            {
                result[j] = buff[s];
                j++;
            }
        }
        else
        {
            buff[k] = str[i];
        }
    }
    printf("%s", result);
}