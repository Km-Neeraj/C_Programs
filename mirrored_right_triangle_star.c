
           #include<stdio.h>
           int main()
           {
                         int row,i,j,k;
                         printf("Enter the number of row\n");
                         scanf("%d",&row);
                         for(i=1;i<=row;i++)
                         {
                                 for(j=row;j>=i;j--)
                                 {
                                                  printf(" ");  // for space
                                 }
                                 for(k=1;k<=i;k++)
                                 {
                                                  printf("*");    // print star
                                 }
                                 printf("\n");
                         
                         }
                 
                 return 0;
          
           }                                              /*      *
                                                                * *
                                                              * * *
                                                            * * * *
                                                          * * * * *
                                                        * * * * * *    
                                                        Mirrored Right Triangle Star Pattern  
                                                            */  
                                                                        
                                                                       
                                                                
                                                                      
