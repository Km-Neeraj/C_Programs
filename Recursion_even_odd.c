
   #include<stdio.h>
   int even_odd(int);

   int main()
   {
       int range;
       printf("Enter range\n");
       scanf("%d",&range);
       even_odd(range);
       return 0;
   }
   int even_odd(int num)
   {
                        
                      if(num==0)
                         return 0;
                         else
                         {
                          if(num%2==0)
                            {                  
                               printf("%d ",num);                 
                            }             
                           
                            return even_odd(num-1);
                             

                         }
   }
   