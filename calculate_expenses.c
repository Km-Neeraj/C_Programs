
      /* Calculation of total expenses */

      #include<stdio.h>
      int main()
      {
                         int qty,dis;
                         float rate,total;
                         printf("Enter Quantity and rate\n");
                         scanf("%d %f",&qty,&rate);
                         if(qty>1000)
                          dis=10;
                         else
                         dis=0;
                  total=(qty*rate)-(qty*rate*dis/100);
                  printf("Total expenses = Rs %f\n",total);
                  return 0;
      }