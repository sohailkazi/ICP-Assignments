//Reference: Dr. Ripon Patgiri: https://github.com/patgiri/C-programming/blob/main/random.h
#include <time.h>
unsigned int random32()
{
    int i,n,d;
    unsigned int r=0;
    for(i=0;i<32;i++)
    {
        n=clock();
        d=n&1;
        r=r+d*(1<<i);
    }
    return r;
}