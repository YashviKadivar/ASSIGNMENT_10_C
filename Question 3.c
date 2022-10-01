/* Write a function to check whether a given number is even or odd. Return 1 if the
    number is even, otherwise return 0. (TSRS)  */

#include<stdio.h>

int odd_even(int);

int main()
{
    int a,b;

    printf("\n Enter a Value->");
    scanf("%d",&a);

    b=odd_even(a);

    printf("\n %d",b);

    return 0;
}

int odd_even(int x)
{
    if(x%2==0)
        return 1;
    else
        return 0;

    return (x);
}
