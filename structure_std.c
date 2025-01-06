
  #include<stdio.h>
  
  struct std
   {
         int roll_no;
         char name[20];
         char subject[20];
         int marks;
   };

   int main()
   {
    struct std s[3]; 
    int i;
    printf("Enter student records\n");
    for(i=0;i<3;i++)
    {
        printf("Enter std[%d] details\n",i+1);
        printf("Enter std[%d] Roll_number = ",i+1);
        scanf("%d",&s[i].roll_no);
        printf("Enter std[%d] Name= ",i+1);
        scanf("%s",s[i].name);
        printf("Enter std[%d] Subject= ",i+1);
        scanf("%s",s[i].subject);
        printf("Enter std[%d] Marks= ",i+1);
        scanf("%d",&s[i].marks);
        printf("\n\n");
    }
    printf("Students Record\n");
    for(i=0;i<3;i++)
    {
       printf("Std[%d] Records ", i+1);
       //printf("std[%d]", i+1);
       printf("\nstd[%d]: Roll_number= %d\t",i+1,s[i].roll_no);
       printf("\nstd[%d]: Name= %s\t",i+1,s[i].name);
       printf("\nstd[%d]: Subject= %s\t",i+1,s[i].subject);
       printf("\nstd[%d]: marks= %d\t",i+1,s[i].marks);
       printf("\n\n");
    }                  
   }
