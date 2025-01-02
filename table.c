#include<stdio.h>
int main()
{
     int num,table,i;
     printf("Enter the number\n");
     scanf("%d",&num);
     for(i=1;i<=10;i++)
     {
                         table=num*i;
                         printf("  %d * %d = %d \n",num,i,table);
     }  
     return 0;                      
}