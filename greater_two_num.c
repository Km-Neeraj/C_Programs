
               #include<stdio.h>
               int main()
               {
                         int num1,num2,max;
                         printf("Enter two numbers\n");
                         scanf("%d%d",&num1,&num2);
                         max=num1>num2?num1:num2;
                         printf("Greatest number between %d %d = %d ",num1,num2,max);
                          return 0;
               }
