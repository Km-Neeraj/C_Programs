#include<stdio.h>
int main()
{
     int i,n,num,found=0;
     printf("Enrter the number of elements in an array\n");
     scanf("%d",&n);
     int arr[n];
     printf("Enter the array elements\n");
     for(i=0;i<n;i++)
     {
        printf("Arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
     }
     printf("Enter the element which you want to search\n");
     scanf("%d",&num);
     for(i=0;i<n;i++)
     {
        if(arr[i]==num)
        {
            printf("Element %d found at the %d\n",num,i+1);
            found++;
        }
     }
     if(!found)
     {
        printf("Element %d is not found in the array\n",num);

     }
     return 0;
}