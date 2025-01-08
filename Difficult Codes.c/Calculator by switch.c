#include<stdio.h>
int main () 
{  
   int a,b,ch;
   printf("\n Enter two numbers");
   scanf("%d%d",&a,&b);
   printf("\n Enter choice between 1,2,3");
   scanf("%d",&ch);
   switch(ch)
 {
      case 1:
          printf("\n sum=%d",a+b);
          break;
       case 2 :
          printf("\n sub=%d",a-b);
         break;
      case 3 :
         printf("\n multiplication=%d",a*b);
         break;
      default :
      printf("\n wrong choice");
   }
printf("\n code executed sucessfully");
}
