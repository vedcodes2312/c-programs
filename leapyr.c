// leap year
#include <stdio.h>

int main() {
    
   int yr;
   START:
   printf("\n enter year\t");
   scanf("%d",&yr);
   if(yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0)
   { 
       printf("\n %d is leap year",yr);
   }
       else 
       {
           printf("%d is non-leap year",yr);
       }
       goto START;
       return 0;
}

