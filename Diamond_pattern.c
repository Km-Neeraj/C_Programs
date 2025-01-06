
     #include<stdio.h>
     int main()
     {
        int i,j,k,row;
        printf("Enter the number of row\n");
        scanf("%d",&row);
        for(i=1;i<=row;i++)
        {
                         for(j=row;j>i;j--)
                         {
                            printf(" ");
                         }
                         for(k=1;k<=i;k++)
                         {
                             printf("* ");
                         }
                         printf("\n");
        }
        for(i=row;i>=1;i--)
        {
                         for(j=row;j>=i;j--)
                         {
                            printf(" ");
                         }
                         for(k=2;k<=i;k++)
                         {
                             printf("* ");
                         }
                         printf("\n");
        }
                 
        return 0;
        
     }                                                                   /*           *
                                                                                     *  *
                                                                                   *  *   *
                                                                                  *  *  *  *
                                                                                 *  *  *  *  *
                                                                                   *  *  *  *
                                                                                     *  *  *
                                                                                       *  *
                                                                                         *                   */
