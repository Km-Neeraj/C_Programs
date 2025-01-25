#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char a[]="C-Program";
   printf("%s",*(a+strlen(a)));
   return 0;
}