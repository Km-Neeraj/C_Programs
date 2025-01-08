#include<stdio.h>
int main()
{
     int i,rem,temp,j,rev;
     for(i=100;i<=500;i++)
     {
        temp=i;
         while(i!=0)
         {
            rem=i%10;
            rev=rev+rem*rem*rem;
            i=i/10;
         }
         if(temp==rev)
            printf("%d ",rev);
        rev=0;
     }
     return 0;
}