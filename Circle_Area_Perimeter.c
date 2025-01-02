#include<stdio.h>  //header file
int main()
{
                         float r,area,perimeter;
                         printf("Enter radius of circle\n");
                         scanf("%f",&r);
                         area=3.14*r*r; // circle's area=pi*r*r where pi=22/7 or 3.14
                         printf("Area of circle = %f \n",area);
                         perimeter=2*3.14*r;
                         printf("Perimeter of circle=%f",perimeter);
                         return 0;
}