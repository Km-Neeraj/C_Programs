
/*Hollow Square Pattern*/
  #include<stdio.h>
  int main()
  {
                         int i,j,k,row;
                         printf("Enter the number of row\n");
                         scanf("%d",&row);
                         for(i=1;i<=row;i++)
                         {
                             for(j=1;j<=row;j++)
                             {
                               if(i==1||j==1||i==row||j==row)  
                               {
                                  printf(" * ");                
                               }
                               else
                               {
                                  printf("   ");
                               }
                               
                             }
                            printf("\n");   
                         }

      return 0;
  }