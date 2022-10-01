/*  Write a function to print all prime factors of a given number. For example, if the
    number is 36 then your result should be 2, 2, 3, 3. (TSRN)  */

#include<stdio.h>

void factors(int);

int main()
{
    factors(36);
}

void factors(int x)
{
    int i=2;

    while(x)
    {
        if(x%i==0)
        {
            x=x/i;
            printf("%d ",i);
        }
        else
            i++;
    }
}
