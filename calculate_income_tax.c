#include<stdio.h>
int main()
{
     float income,tax=0;
     printf("Enter Total Annual Taxable Income \n");
     scanf("%f",&income);
     if(income<=100000)
       tax=0;
    else if(income<=150000)
    tax=0.10*(income-100000);
    else if(income<=250000)
    tax=5000+0.20*(income-150000);
    else
    tax=25000+0.30*(income-250000);
//Display the tax
 printf("The computed tax is Rs. %.2f \n",tax);
 return 0;

}