#include<stdio.h>
int main()
{
   int N=20;
   N=(N<<1)+N+(N>>1);
   printf("%d",N);
   return 0;
}