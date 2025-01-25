#include<stdio.h>
int main()
{
   static int x,y;
   x=++x + ++x;
   y=x++;
   printf("%d %d",x,y);
   return 0;
}