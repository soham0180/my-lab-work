#include<stdio.h>
int main()
{
    int age;

    printf("Enter your Age: ");
    scanf("%d",&age);

    if(age >= 18)
    {
        printf("You Can vote.");
    }
    else
    {
        printf("You Can't vote.");

    }

    return 0;
}