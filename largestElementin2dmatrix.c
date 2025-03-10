//program to find largest element in 2d matrix
 #include<stdio.h>
 int main()
 {
    int mat[3][3]={
                         {11,22,33},
                          {22,34,89},
                          {35,0,82}
                   };
  int i,j,big;
  big=mat[0][0];
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
        if(mat[i][j]>big)
        {
            big=mat[i][j];
        }
     }
  }
  printf("Biggest element in matrix = %d",big);
  return 0;
    
 }
