//factorial using decrement
#include<stdio.h>
int main()
{
    int i,n;
    unsigned long long factorial=1;
    printf("enter a number to find its factorial:\t");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        factorial*=i;//factorial=factorial*i
    }

    printf("factorial is %d!=%llu",n,factorial);
    return 0;
}
