#include<stdio.h>
int main()
{
  int c,i,product;
  printf("Enter the number:");
  scanf("%d",&c);
  for(i=1;i<=100;i++)
    {
      product=c*i;
      printf("The product of %d is %d\n",c,product);
    }
  return 0;
}
