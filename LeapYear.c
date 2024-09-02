#include<stdio.h>
void main()

{
    int year;
    printf("enter year\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("leap year\n");

    }
    else
    {
        printf("not a leap year\n");
    }
}   