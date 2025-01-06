
   #include<stdio.h>
   void input_array(int arr[10]); //function declaration
   int find_sum(int arr[10]);
   float find_average(int arr[10],int);
   int find_max(int arr[10]);
   int find_min(int arr[10]);
   int i,sum=0;
int main()
{
                         int arr[10];
                         input_array(arr);// input_array function call
                         sum=find_sum(arr);  //find_sum function call
                         printf("Sum of the array elements = %d ",sum);
                         float avg=find_average(arr,sum);   //find_average() function call
                         printf("\naverage of given array elements = %.3f ",avg);
                         int max=find_max(arr);    //find_max() function call
                         printf("\nMax element in the given array elements = %d ",max);
                         int min=find_min(arr);  //find_min() function call
                         printf("\n minimum element in the given array elements = %d ",min);
     return 0;                    
}
void input_array(int arr[])
{
printf("Enter array elements\n");
   for(i=0;i<10;i++)
   {
        printf("Element arr[%d] = ",i+1);
       scanf("%d",&arr[i]);
   }  
}
int find_sum(int arr[])
{
   for(i=0;i<10;i++)
   {
      sum=sum+arr[i];
   }
   return sum;
}
float find_average(int arr[],int sum)
{
     float avg;
    avg=sum/10;
    return avg;
}
int find_max(int arr[])
{
                         int max=arr[0];
                         for(i=0;i<10;i++)
                         {
                           if(arr[i]>max) 
                           {
                               max=arr[i];
                           }                      
                         }
                         return max;
}
int find_min(int arr[])
{
                         int min=arr[0];
                         for(i=0;i<10;i++)
                         {
                            if(arr[i]<min)
                            {
                                 min=arr[i];
                            }
                         }
                    return min;     
}
