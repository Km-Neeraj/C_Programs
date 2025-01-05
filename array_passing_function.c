
 #include<stdio.h>
 void display1(int);  //function declaration
 void display2(int *);
 int main()
 {
           int i;
           int marks[]={55,65,75,56,78,78,90};
           for(i=0;i<=6;i++)
               display1(marks[i]);  //call by value
         printf("\n\n");
           for(i=0;i<=6;i++)
               display2(&marks[i]);  //call by reference
     return 0;
                         
 }
 void display1(int m)
 {
                         printf("%d ",m);
 }
 //printf("\n\n");
 void display2(int *n)
 {
                         
                         printf("%d ",*n);
 }