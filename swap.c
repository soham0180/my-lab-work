#include<stdio.h>
int main()
{
    int a,b;

 printf("your a is : ");
 scanf("%d",&a);

 printf("your b is : ");
 scanf("%d",&b);
  
 a = a+b;
 b = a-b;
 a = a-b;

  printf("\nyour a is : %d",a);
  printf("\nyour b is : %d",b);



 
     return 0;


}