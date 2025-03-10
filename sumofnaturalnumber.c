
// program to find the first n natural number sum
#include<stdio.h>
int main()
{
   int n,sum=0;
   printf("Enter the range of natural number\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       sum=sum+i;
   }
   printf("Sum of first %d nutural number = %d ",n,sum);
   return 0;
}

//Enter the range of natural number
// 5
// output=1+2+3+4+5= 15