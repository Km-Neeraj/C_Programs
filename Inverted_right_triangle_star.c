
         #include<stdio.h>
         int main()
         {
                         int row,i,j;
                         printf("Enter the number of row\n");
                         scanf("%d",&row);
                         for(i=1;i<=row;i++)
                         {
                                                  for(j=row;j>=i;j--)
                                                  {
                                                                           printf(" *");
                                                  }
                                                  printf("\n");
                         }
                return 0;
         }                                                         /*   * * * * * *
                                                                        * * * * *
                                                                        * * * *
                                                                        * * *
                                                                        * *
                                                                        *
                                                                                      Inverted Right Triangle */