#include<stdio.h>
int main()
{
                         float cel,farhnt; // fah represents farhnt and cel represents celsius
                         printf("Enter temperature in celsius\n");
                         scanf("%f",&cel);
                         farhnt=(((cel*9)/5)+32);
                         printf("Converted temperature in fahrenheit = %f ",farhnt);
                         return 0;
}