/* Write a function to print first N natural numbers (TSRN) */

#include<stdio.h>

void  number(int);

int main()
{
    int n;

    printf("\n Enter a Number->");
    scanf("%d",&n);

    number(n);

    return 0;
}

void number(int a)
{
    int i;

    for(i=1;i<=a;i++)
        printf("\n  %d",i);
}
