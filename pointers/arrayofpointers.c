//basic concept of array of pointers
#include<stdio.h>
int main()
{
    int a[3] = {10, 20, 30};
    int *ptr[3];
    for(int i=0; i<3; i++)
    {
        ptr[i]=&a[i];  //for example ptr[0]=&a[0]
        printf("%p \n",ptr[i]);
        printf("%p \n",&a[i]);
        printf("%d \n",*ptr[i]);
        printf("%d \n",a[i]); 
    }
    return 0;
}