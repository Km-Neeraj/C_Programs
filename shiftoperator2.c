#include<stdio.h>
int main()
{
   int m=3;
   switch(m<<(m-3))
   {
     default:
     printf("M");
     case 1:
     printf("N");
     case 3:
     printf("O");
     case 5:
     printf(" P");

   }
   return 0;
}