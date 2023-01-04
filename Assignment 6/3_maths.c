#include"random.h"
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    unsigned int X[2][n];
    unsigned int Y[2][n];
    
    for(int i = 0; i < n; i++)
    {
        X[0][i] = random32();
        X[1][i] = random32();
        Y[0][i] = random32();
        Y[1][i] = random32();
    }
    
    double ans = 0;
    
    for(int i = 0; i < n; i++)
    {
        ans += sqrt(((X[1][i] - X[0][i]) * (X[1][i] - X[0][i])) - ((Y[1][i] - Y[0][i]) * (Y[1][i] - Y[0][i])));
    }
    ans =ans/n;
    printf("Required ans: %f", ans);
    return 0;
}
