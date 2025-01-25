#include<stdio.h>
int main()
{ 
      enum{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
      int num;
      num=SUNDAY+THURSDAY+5;
      printf("value of num = %d ",num);
      return 0;        //______output=9_______
}