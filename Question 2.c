/* Write a function to calculate simple interest. (TSRS)    */

#include<stdio.h>

float  simple_interest(float,float,float);

int main()
{
    float w,x,y,z;

    printf("\n Enter Balance->");
    scanf("%f",&x);

    printf("\n Enter rate->");
    scanf("%f",&y);

    printf("\n Enter time in years->");
    scanf("%f",&z);

    w=simple_interest(x,y,x);

    printf("\n simple interest = %f",w);

    return 0;
}

float simple_interest(float p,float r,float t)
{
    float a;

    a=((p*r*t)/100);

    return a;
}
