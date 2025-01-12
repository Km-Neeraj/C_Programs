
 #include<stdio.h>
 int main()
 {
      int i,j,row,k;
      printf("Enter thge number of row\n");
      scanf("%d",&row);
      for(i=0;i<row;i++)
      {
         for(j=row;j>i;j--)
         {
            printf(" ");              
         }
         for(k=1;k<=2*i+1;k++)
         {
            if(k==1||i==row-1||k==(2*i+1))
            {
               printf("*");
            }
            else
            {
                printf(" ");
            }
            
         }
         printf("\n");
      }
      return 0;
 }