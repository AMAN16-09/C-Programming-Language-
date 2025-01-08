#include<stdio.h>
int main()
{
  int SP,CP;
  printf("Enter the selling price and cost price of the item\n");
  scanf("%d%d",&SP,&CP);
  if(SP>CP)
  {
    printf("The profit is %d",SP-CP);
  }
  else
  {
    printf("The loss is %d",CP-SP);
  }
  return 0;
}
