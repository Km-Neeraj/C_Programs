

     #include<stdio.h>
     int main()
     {
            int a,b,c,d,e,max;
            printf("Enter five numbers\n");
            scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
            max=(a>b&&a>c&&a>d&&a>e)?a:((b>c&&b>d&&b>e)?b:((c>d&&c>e)?c:((d>e)?d:e)));
            printf("Greatest among %d %d %d %d %d = %d ",a,b,c,d,e,max);
        return 0;

     }