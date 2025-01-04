
   #include<stdio.h>
   int main()
   {
       int num;
       printf("Enter the number\n");
       scanf("%d",&num);
       if(num>0 && (num&(num-1))==0)
       {
           printf("%d is the power of 2",num);
       }
       else
       {
           printf("%d is not the power of 2 ",num);
       }
  
  
      return 0;

   }