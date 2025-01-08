#include<stdio.h>
int main ()
{
  int yy;
  printf("\n Enter the year:");
  scanf("%d",&yy);
  if (yy % 4 == 0)
  {
    printf("leap year");
  }
  else
  {
  printf("not a leap year");
  }
  return 0;
}
