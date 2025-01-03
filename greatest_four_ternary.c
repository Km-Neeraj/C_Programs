
      #include<stdio.h>
      int main()
      {
                         int a,b,c,d ,grtst;    //for storing four numbers
                         printf("Enter four numbers\n");
                         scanf("%d%d%d%d",&a,&b,&c,&d);
                         grtst=(a>b&&a>c&&a>d)?a:((b>c&&b>d)?b:((c>d)?c:d));
                         printf("Greatest number among %d %d %d %d = %d",
                             a,b,c,d,grtst);
                             return 0;
      }