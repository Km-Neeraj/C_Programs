
 #include<stdio.h>

 int main()
 {
                         int row,i,j,k,l;
                         printf("Enter the number of row\n");
                         scanf("%d",&row);
                         for(i=0;i<row;i++)
                         {
                           for(j=row;j>i;j--)
                           {
                              printf("*");
                           }
                           for(k=1;k<=2*i+1;k++)
                           {
                                                  printf(" ");
                           }
                           for(l=row;l>i;l--)
                           {
                                                  printf("*");
                           }
                           printf("\n");
                         }

                         for(i=row;i>0;i--)
                         {
                           for(j=row;j>=i;j--)
                           {
                              printf("*");
                           }
                           for(k=2;k<2*i+1;k++)
                           {
                                                  printf(" ");
                           }
                           for(l=row;l>=i;l--)
                           {
                                                  printf("*");
                           }
                           printf("\n");
                         }
   return 0;
 }