#include<stdio.h>
int main()
{
    int i, sum=0;
    for(i=1;i<=1000;i++)
    {
        if((i%3 == 0) && (i%4 != 0))
            sum += i;
    }
    printf("Output = %d\n", sum);
    return 0;
}