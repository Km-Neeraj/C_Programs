#include<stdio.h>
int main()
{
                         int width,height,area,perimeter;
                         printf("Enter width and height of rectangle\n");
                         scanf("%d %d",&width,&height);
                         area=width*height; // calculate rectangle area
                         printf("area of rectangle= %d \n",area);
                         perimeter=2*(width+height);
                         printf("Perimeter of rectangle = %d ",perimeter);
                         return 0;

}