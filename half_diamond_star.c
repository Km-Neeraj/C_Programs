
   #include<stdio.h>

   int main()
   {
                         int i,j,k,row;
                         printf("Enter the number of row\n");
                         scanf("%d",&row);
                         for(i=1;i<=row;i++)
                         {
                           for(j=1;j<=i;j++)
                           {
                              printf("*");
                           }
                           printf("\n");
                         }
                         for(i=row;i>=1;i--)
                         {
                           for(j=2;j<=i;j++)
                           {
                              printf("*");
                           }
                           printf("\n");
                         }

   }