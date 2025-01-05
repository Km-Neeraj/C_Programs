
   #include<stdio.h>
   int main()
   {
                         int avg,sum=0,i;
                         int std[30]; //array declaration;
                         printf("Enter student marks\n");
                         for(i=0;i<30;i++)
                         {
                          printf("std[%d]: ",i+1);
                          scanf("%d",&std[i]); //store data in an array
                         }
                         for(i=0;i<30;i++)
                         {
                             sum=sum+std[i];   //read data from an array
                         }
                         avg=sum/30;
                         printf("Average of 30 students marks = %d ",avg);
            return 0;             

   }