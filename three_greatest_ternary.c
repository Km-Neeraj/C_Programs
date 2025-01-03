
      #include<stdio.h>
      int main()
      {
                         int num1,num2,num3,grtst;
                         printf("Enter Three numbers\n");
                         scanf("%d%d%d",&num1,&num2,&num3);
                         grtst=(num1>num2&&num1>num3)?num1:((num2>num3)?num2:num3);
                         printf("Greatest num among %d %d %d = %d ",num1
                         ,num2,num3,grtst);
                         return 0;

      }