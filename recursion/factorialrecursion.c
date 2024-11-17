//factorial using recursion
#include <stdio.h>

int factorial(int n); //prototype

int main()
{
    int num;
    printf("enter value of num\n");
    scanf("%d",&num);
    int result = factorial(num);  //call
    printf("%d factorial is %d",num,result);
    return 0;
}

int factorial(int n) //definition
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);  //recursive call
    }
}
