#include<stdio.h>
void are_amicable(int ,int);
int sum_of_divisors(int);
int main()
{
    int num1,num2;
    printf("Enter two numbers to check amicable or not\n");
    scanf("%d %d",&num1,&num2);
    are_amicable(num1,num2);
}
void are_amicable(int n1,int n2)
{
    int sum1,sum2;
    sum1=sum_of_divisors(n1);
    sum2=sum_of_divisors(n2);
    if(sum1==sum2)
     printf("Numbers %d %d are amicable ",n1,n2);
    else
     printf("Numbers %d %d are  not amicable ",n1,n2);
}
int sum_of_divisors(int num)
{
    int sum=1,i;
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
        
    }
    return sum;
}