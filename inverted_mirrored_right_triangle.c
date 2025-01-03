 
       #include<stdio.h>
       int main()
       {
                         int row,i,j,k;
                         printf("Enter number of row\n");
                         scanf("%d",&row);
                         for(i=1;i<=row;i++)
                         {
                             for(j=1;j<=i;j++)
                             {
                                                  printf(" ");
                             }
                             for(k=row;k>=i;k--)
                             {
                                                  printf("*");
                             }
                             printf("\n");
                         }
             return 0;            
       }                            /*
                                       * * * * * *
                                         * * * * *
                                           * * * *
                                             * * *
                                               * *
                                                 *
                                     
                        Inverted Mirrored Right Triangle star Pattern         */