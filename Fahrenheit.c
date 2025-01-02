#include<stdio.h>
int main()
{
                         float fah,cel;  //fah represents fahrenheit and cel represents celsius
                         printf("Enter tenperature in fahrenheit\n");
                         scanf("%f",&fah);
                         cel=(fah-32)*5/9;
                         printf("Converted temperature in celsius = %f ",cel);
                         return 0;
}