/* Write a function to print first N odd natural numbers. (TSRN)    */

#include<stdio.h>

void odd(int);

int main()
{
    int a;

    printf("\n Enter a Number->");
    scanf("%d",&a);

    odd(a);

    return 0;
}

void odd(int x)
{
    int i;

    for(i=1;i<=x;i=i+2)
        printf("\n %d",i);

}
