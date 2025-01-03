
     #include<stdio.h>
      
      int fibonacci(int); //function declaration
      int main()
      {
                         int terms,i;
                         printf("Enter the number of terms of fibonacci series\n");
                         scanf("%d",&terms);
                         for(i=0;i<=terms;i++)
                         {
                                                  printf(" %d ",fibonacci(i)); //function call
                         }
                         return 0;
      }
      int fibonacci(int num)
      {
                         if(num==0||num==1)
                         return num;
                         else
                         return fibonacci(num-1)+fibonacci(num-2);
      }