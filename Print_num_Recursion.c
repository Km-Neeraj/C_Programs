   
      #include<stdio.h>
      
       void print_num(int); // function Declaration
        int main()
        {
                         int num;
                         printf("Enter number\n");
                         scanf("%d",&num);
                          print_num(num);
        }
         
          void print_num(int num)
          {
                         if(num==0)
                         return;
                          
                         else
                         //printf("%d  ",num);
                          print_num(num-1);

                         printf("%d  ",num);
          }