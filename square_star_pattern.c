
      #include<stdio.h>
      int main()
      {
                         int row,col,i,j;
                         printf("Enter the number of row and column\n");
                         scanf("%d %d",&row,&col);
                         for(i=1;i<=row;i++)
                         {
                            for(j=1;j<=col;j++)
                            {
                                                  printf(" *");
                            }
                            printf("\n");
                         }
                        return 0; 
      }
                                        /*     * * * * * * * 
                                               * * * * * * *
                                               * * * * * * *
                                               * * * * * * *
                                               * * * * * * *
                                                 Square Star Pattern */