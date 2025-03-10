//program to store records of three books containing book_name,number of page and price
#include<stdio.h>
struct Book_Details
{
  char book_name[100];
  float price;
  int pages;  
};
int main()
{
    struct Book_Details b[3]; // array of structure
    printf("Enter book Details\n");
    for(int i=1;i<=3;i++)
    {
        printf("\nEnter %d Book Details\n",i);
        printf("Book_Name:\n ");
        scanf("%s",b[i].book_name);
        printf("Book_Price: \n ");
        scanf("%f",&b[i].price);
        printf("Number_of_pages:\n ");
        scanf("%d",&b[i].pages);
    }
    printf("\nAll Book Details\n");
    for(int i=1;i<=3;i++)
    {
       printf("\nBook %d Details\n",i);
       printf("Book_Name: %s\n",b[i].book_name);
       printf("Book_price: %.3f\n",b[i].price);
       printf("Number_of_pages: %d\n",b[i].pages);
    }
    return 0;
}