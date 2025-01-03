
             #include<stdio.h>

             void reverse_num(int);   //function declaration

             int main()
             {
                         int num;
                         printf("Enter the number\n");
                         scanf("%d",&num);
                         reverse_num(num); //function call
                  return 0;
             }
              void reverse_num(int num)
              {
                         int rem;
                         if(num==0)
                         return;
                         else
                         {
                              rem=num%10;
                              printf("%d",rem);
                              num=num/10;
                              reverse_num(num);
                         }
              }