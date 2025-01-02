#include<stdio.h>
int main()
{
                         int range,i;
                         printf("Enter range to print the even numbers\n");
                         scanf("%d",&range);
                         printf("Even numbers from 1 to %d\n ",range);
                         for(i=1;i<=range;i++)
                         {
                                                  if(i%2==0)
                                                  {
                                                    printf("%d  ",i);
                                                  }
                         }
          return 0;

}