#include<stdio.h>
int main()
{
    int n,i,size,high,low,mid,found=0;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter sorted array elements\n");
    for(i=0;i<size;i++)
    {
        printf("arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter element which do you want to search");
    scanf("%d",&n);
    low=0;
    high=size-1;
    while(low<high)
    {
        mid=(low+high)/2;
        if(arr[mid]==n)
        {
              printf("Element %d found at %d ",n,mid+1);
              found=1;
              break;
        }
        else if(arr[mid]<n)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(!found)
    {
        printf("Element %d is not present\n",n);
    }

 return 0;
}