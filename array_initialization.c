
    #include<stdio.h>

     int main()
     {
                         int i;
                         int arr1[5]={1, 2, 3, 4, 5};   //array initialization
                         int arr2[]={12,23,55,78,90};
                         float arr3[]={77.0,98.6,6.8,4.5,33.8};
                        static long int arr4[10];
                         printf("Print array elements\n");
                         for(i=0;i<5;i++)
                         {
                             printf("arr1[%d] = %d \n",i+1,arr1[i]);
                         }
                         printf("\n\n");
                         for(i=0;i<5;i++)
                         {
                            printf("\narr2[%d] = %d ", i+1,arr2[i]);
                         }
                         printf("\n\n");
                         for(i=0;i<5;i++)
                         { 
                    
                            printf("\narr3[%d] = %f  ",i+1,arr3[i]);
                         }
                         printf("\n\n");
                         for(i=0;i<10;i++)
                         {                       
                           printf("\narr4[%d] = %ld ",i,arr4[i]);                       
                         }
        return 0;
                         
     }