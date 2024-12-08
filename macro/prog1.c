// simple macro function 

#include<stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int main()
{
    float x,y;
    printf("enter value of x and y");
    scanf("%f %f",&x,&y);
    printf("max value = %f",MAX(x,y));
   return 0;
}
