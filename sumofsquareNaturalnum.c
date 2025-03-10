//program to find sum of square of first n natural numbers
#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0;
    printf("Enter the range of first natural numbers\n");
    scanf("%d",&n);
    printf("Sum of square of first n natural numbers \n");
    for(int i=1;i<=n;i++)
    {
       sum=sum+pow(i,2);
       //printf("%d ",sum);
    }
    printf("%d ",sum);
    return 0;
}