
  /* Calculate Profit and Loss*/

    #include<stdio.h>
    int main()
    {
      float sp,cp,p,l;  // sp=selling price,cp=cost price,p=profit,l=loss
      printf("\n Enter cost price and selling price");
      scanf("%f %f",&cp,&sp);
      p=sp-cp;    //calculate profit
      l=cp-sp;     //calculte loss
      if(p>0)
        printf("The seller made a profit of Rs %f\n",p);
      if(l>0)
        printf("The Seller incurred loss of Rs %f\n",l);
       if(p==0||l==0)
          printf("There is no loss,no profit\n");
return 0; 
    }