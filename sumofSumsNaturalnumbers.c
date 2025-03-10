//program to find sum of series first n natural numbers 1,2,3,4,5,.....
//then find its sum
#include<stdio.h>
int main()
{
   int n,sum=0,series_sum=0;
   printf("Enter the range of first n natural numbers\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
     sum=sum+i;
     series_sum=series_sum+sum;
   }
   printf("Sum of first %d natural numbers = %d \n",n,sum);
   printf("Sum of sums of first %d nutural number series = %d ",n,series_sum);
   return 0;
}