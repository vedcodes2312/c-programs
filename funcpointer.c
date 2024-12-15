//lambda behaviour - function pointer

#include<stdio.h>

typedef int (*operation)(int, int);

int add(int a , int b)
{
    return (a+b);
}

int apply_operation(operation op, int x, int y)
{
    return op(x, y);
}

int main()
{
 int result = apply_operation(add,5,3);
 printf("the sum is %d",result);
 return 0;
}