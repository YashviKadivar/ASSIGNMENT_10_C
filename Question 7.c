/* Write a function to calculate the number of combinations one can make from n items
    and r selected at a time. (TSRS)    */

#include<stdio.h>

int fact(int);

int main()
{
    printf(" %d ",fact(5));

    return 0;

}

int fact(int n)
{
  int i,fact=1;

  for(i=1;i<=n;i++)
    fact=fact*i;

  return fact;
}
