#include<stdio.h>

int main()
{
    int rollNo,sub1,sub2,sub3,total;
    float avg;
    char name[20];

    printf("Enter name: ");
    scanf("%s",&name);
    printf("Enter rollNo: ");
    scanf("%d",&rollNo);
    printf("Enter sub1: ");
    scanf("%d",&sub1);
    printf("Enter sub2: ");
    scanf("%d",&sub2);
    printf("Enter sub3: ");
    scanf("%d",&sub3);

    total = sub1 + sub2 + sub3;
    avg = total / 3;

    printf("\n======| Marksheet |======\n");
    printf("\n| Name:  %s             |",name);
    printf("\n| Roll No:  %d          |",rollNo);
    printf("\n| Sub1:  %d             |",sub1);
    printf("\n| Sub2:  %d             |",sub2);
    printf("\n| Sub3:  %d             |",sub3);
    printf("\n| Total:  %d           |",total);
    printf("\n| Avg:  %f      |",avg);

    if(sub1 >= 35 && sub2 >= 35 && sub3 >= 35)
  {
    {
        printf("\npass");
    }
    if (avg >= 80)
    {
        printf("\nA grade");
    }
    if(avg >= 60 && avg < 79)
    {
        printf("\nB grade");
    }
    if(avg >= 50 && avg < 59)
    {
        printf("\nC grade");
    }
    if ( avg < 35)
    {
        printf("\nfail");
    }
}
    else
    {
        printf("\nfail");
    }

    return 0;
}