//switch case calculator with char

#include <stdio.h>//preprocessor directive

int main()//body of code
{
  float num1,num2,total;
  char a;
  printf("enter two numbers\n");
  scanf("%f %f",&num1,&num2);//float used for proper output else integer mai 5/6 mai quotient 0 aayega jo wrong hai
  printf("enter operation\n");
  scanf(" %c", &a);//space must while using char data type
  switch(a)
  {
      case '+':
      printf("result: %f\n", num1+num2);
      break;
      
       case '-':
      printf("result: %f\n", num1-num2);
      break;
      
      
       case '*':
      printf("result: %f\n", num1*num2);
      break;
      
      
   case '/':
      printf("result: %.2f\n", num1/num2);// %.2f means output upto two decimal place
      break;
      
      default:
      printf("enter valid operation");
      break;
      
  }
  return 0;
}
