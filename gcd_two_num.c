
#include<stdio.h>
int gcd_rec(int,int);
int main()
{
     int num1,num2,res;
     printf("Enter two numbers\n");
     scanf("%d %d",&num1,&num2);
     res=gcd_rec(num1,num2);
     printf("\nGcd of %d %d = %d",num1,num2,res);
     return 0;
}
int gcd_rec(int num1,int num2)
{
    if(num2!=0)
    {
        return gcd_rec(num2,num1%num2);
    }
    else
    {
      return num1;
    }
    
   return 0;
 }
    