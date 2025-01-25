#include<stdio.h>
void add();
int main()
{
   add();
   add();
   add();
   add();
   return 0;
}
void add()
{
   static int a;
   a=a+15;
   a--;
   printf("\n %d",a);
}