#include<stdio.h>
int factorial_num(int); //function declaration;
int main()
{
   int num,res;
   printf("Enter number\n");
   scanf("%d",&num);
   res=factorial_num(num);
   printf("Factorial of %d = %d ",num,res);

}
int factorial_num(int num)
{
                         if(num==1)
                         return 1;
                         else
                         return num*factorial_num(num-1);
}