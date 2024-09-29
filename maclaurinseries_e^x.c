//Maclaurin series for e^x
/*  e^x = 1 + x + (x^2/2!) + (x^3/3!) + (x^4/4!) + ......     */

#include <stdio.h>//preprocessor directive and header file
#include <math.h>
int main()//body of the code
{
    int x,n,m,p,fact;
    float d,sum;//d->store answer of division,
    printf("enter value of x \n"); //for what value you need approximate output like x=2 implies e^2
    scanf("%d",&x);
    
    printf("enter number of terms\n");
    scanf("%d",&n); //in reality,Maclaurin series is infinite term representation of function
    
    for(m=1,sum=1,fact=1;m<n;m++)
    {
        p = pow(x,m);
        fact*=m; //fact=fact*a 
        d=(float)p/fact; //explicit typecasting conversion
        sum+=d; //sum=sum+d
        
        
        
    }
    
    
    printf("\n %f",sum);

    return 0;
}
