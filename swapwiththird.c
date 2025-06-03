#include<stdio.h>
int main()
{
    int a,b,temp;

 printf("your a is : ");
 scanf("%d",&a);

 printf("your b is : ");
 scanf("%d",&b);
  
 temp=a;

 a=b;
 printf("\nyour a :%d",a);

 b=temp;
 printf("\nyour b :%d",b);
 
 

 
     return 0;


}