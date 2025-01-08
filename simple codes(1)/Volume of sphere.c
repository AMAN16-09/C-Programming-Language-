#include <stdio.h>
int main()
{
int r,volume;
printf("Enter the radius of the sphere: ");
scanf("%d",&r);
volume=(4*3.14*r*r*r)/3;
printf("Volume of the sphere is: %d",volume);
return 0;
}
