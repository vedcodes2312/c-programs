//Armstrong number

#include<stdio.h>
#include<math.h>
int main()
{
int remainder,originalnum,num,sum=0;
printf("Enter a number: ");
scanf("%d",&num);
originalnum=num;
while(num>0)
{
    remainder = num % 10;
    sum = sum + pow(remainder,3);
    num = num / 10;

}
if(originalnum == sum)
{
    printf("\n%d is an Armstrong number.",originalnum);
}
else
{
    printf("\n%d is NOT an armstrong number",originalnum);
}

return 0;

}