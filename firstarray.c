#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5};
    int i,n=5;
    printf("the elements of array are \n");
    for(i=0;i<n;i++)
    {
        printf("array[%d]=%d\n",i,array[i]);
    }
    return 0;
}