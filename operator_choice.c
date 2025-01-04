
 #include<stdio.h>
 int main()
 {
    int a,b,res;     //num1 stores in a and num2 in b
    char operator;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Enter Arithmatic Operator(+,-,*,/,%)\n"); //choose operator
    scanf(" %c",&operator);
    res=(operator=='+')?(a+b):(operator=='-')?(a-b):(operator=='*')?(a*b):
         (operator=='/')?(b!=0?(a/b):0):(operator=='%')?(b!=0?(a%b):0):0;
    printf("Result According to chose operator on %d %c %d = %d ",
                   a, operator,b,res);
     return 0;             

 }