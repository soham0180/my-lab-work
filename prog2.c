#include<stdio.h>
int main()
{
    int value;
    printf("enter your value :");
    scanf("%d",&value);
    if(value>=0)
    {
        printf("your value is max : %d",value);
    }
    else
    {
        printf("your value is min :%d",value);
    }
    return 0;
}