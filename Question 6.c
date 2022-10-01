/* Write a function to calculate the factorial of a number. (TSRS)  */

#include<stdio.h>

int factorial(int);

int main()
{
    int a,b;

    printf("\n Enter a Number->");
    scanf("%d",&a);

    b=factorial(a);

    printf("\n %d",b);

    return b;
}

int factorial(int n)
{
    int i,f=1;

    for(i=1;i<=n;i++)
    {
      f=f*i;
    }

    return f;
}

