
    #include<stdio.h>
    int main()
    {
                         int num1,num2;
                         printf("Enter two numbers\n");
                         scanf("%d%d",&num1,&num2);
                         printf("Numbers Before swapping\n");
                         printf("num1 = %d num2 = %d ",num1,num2);
                         num1=num1^num2;
                         num2=num1^num2;
                         num1=num1^num2;
                         printf("\nNumbers after swapping\n");
                         printf("num1 = %d num2 = %d ",num1,num2);
           return 0;
    }