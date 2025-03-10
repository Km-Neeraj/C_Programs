//program to declaration and initialization of structure memeber
#include<stdio.h>
struct book{                          //structure declaration
              char name[1000];
              int pages;
              float price;
};

int main()
{
    struct book b[3]={
                         {"Ramayana",1000,2000},                           
                         {"Bhagwatgeeta",700,500},
                         {"AtomicHabit",200,500}
                     };
  printf("Book_Details\n");
  for(int i=0;i<3;i++)
  {
     printf("\nBook Number %d Details\n",i+1);
     printf("Book_name: %s\n",b[i].name);
     printf("Book_price: %.3f\n",b[i].price);
     printf("Number_of_pages: %d\n",b[i].pages);

  }
  return 0;
}